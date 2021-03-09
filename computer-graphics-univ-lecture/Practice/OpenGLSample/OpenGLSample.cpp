#include <iostream>
using namespace std;

//#define FREEGLUT_STATIC
//#define GLEW_STATIC
#include <gl/freeglut.h>
#include <gl/glew.h>

struct Vec3f { // 3���� ��ǥ�� ǥ���ϱ� ���� ����ü
    float x, y, z;
    Vec3f() { }
    Vec3f(float _x, float _y, float _z)
        : x(_x)
        , y(_y)
        , z(_z)
    {
    }
};

enum { TRIANGLE,
    N_VBOs };
GLuint VBO[N_VBOs]; // ������ ���� ��ü

static const char* pVS = // ������ ���̴� �ҽ�
    "#version 330                                                      \n"
    "layout (location = 0) in vec3 Position;                           \n"
    "                                                                  \n"
    "void main()                                                       \n"
    "{                                                                 \n"
    "    gl_Position = vec4(Position*0.1, 1.0);                        \n"
    "}";

static const char* pFS = // �����׸�Ʈ ���̴� �ҽ�
    "#version 330                                                      \n"
    "out vec4 FragColor;                                               \n"
    "                                                                  \n"
    "void main()                                                       \n"
    "{                                                                 \n"
    "    FragColor = vec4(1.0, 0.0, 0.0, 1.0);                         \n"
    "}";

static void AddShader(GLuint shaderProg, const char* pShaderSrc, GLint ShaderType)
{ // ���̴� ����
    GLuint shader = glCreateShader(ShaderType);
    if (!shader) {
        cerr << "���� - Shader ����(" << ShaderType << ")" << endl;
        exit(0);
    }
    // ���̴� ������
    const GLchar* src[1] = { pShaderSrc };
    const GLint len[1] = { strlen(pShaderSrc) };
    glShaderSource(shader, 1, src, len);
    glCompileShader(shader);
    GLint success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) { // ������ ���� �߻�
        GLchar infoLog[256];
        glGetShaderInfoLog(shader, 256, NULL, infoLog);
        cerr << "���� - Shader ������(" << ShaderType << "): " << infoLog << endl;
        exit(1);
    }
    // ���̴� ���α׷��� �����ϵ� ���̴��� �߰�
    glAttachShader(shaderProg, shader);
}

static void SetUpShaders()
{ // ���̴� ���α׷� ��ü ����
    GLuint shaderProg = glCreateProgram();
    if (!shaderProg) {
        cerr << "���� - Shader ���α׷� ����" << endl;
        exit(1);
    }

    // ������ ���̴� �� �����׸�Ʈ ���̴� ����
    AddShader(shaderProg, pVS, GL_VERTEX_SHADER);
    AddShader(shaderProg, pFS, GL_FRAGMENT_SHADER);

    GLint success = 0;
    GLchar errLog[256];

    glLinkProgram(shaderProg); // ���̴� ���α׷� ��ũ
    glGetProgramiv(shaderProg, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProg, sizeof(errLog), NULL, errLog);
        cerr << "���� - Shader ���α׷� ��ũ: " << errLog << endl;
        exit(1);
    }

    glValidateProgram(shaderProg); // ���α׷� ��ü�� ��ȿ���� �˻�
    glGetProgramiv(shaderProg, GL_VALIDATE_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProg, sizeof(errLog), NULL, errLog);
        cerr << "Invalid shader program: " << errLog << endl;
        exit(1);
    }
    glUseProgram(shaderProg); // ���� ���̴� ���α׷� ��ü�� ����
}

static void RenderCB()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); // ������� ȭ�� ����

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, VBO[TRIANGLE]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glDrawArrays(GL_TRIANGLES, 0, 3);
    glDisableVertexAttribArray(0);
    glFinish();
}

static void InitVBOs()
{
    Vec3f Vertices[3]; //�ﰢ���� ������ ��ǥ
    Vertices[0] = Vec3f(-5.0f, -5.0f, 0.0f);
    Vertices[1] = Vec3f(5.0f, -5.0f, 0.0f);
    Vertices[2] = Vec3f(0.0f, 5.0f, 0.0f);
    // ������ ���۸� �����Ͽ� �ﰢ���� ������ ��ǥ ����
    glGenBuffers(N_VBOs, VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO[TRIANGLE]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("OpenGL Sample");

    GLenum s = glewInit();
    if (s != GLEW_OK) {
        cerr << "���� - " << glewGetErrorString(s) << endl;
        return 1;
    }

    cout << "GL version: " << glGetString(GL_VERSION) << endl;
    cout << "GLSL version: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << endl;

    SetUpShaders();
    InitVBOs();

    glutDisplayFunc(RenderCB);
    glutMainLoop();

    return 0;
}