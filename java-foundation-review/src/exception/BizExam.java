package exception;

public class BizExam {

	public static void main(String[] args) {
		BizService biz = new BizService();
		biz.bizMethod(5);
		biz.bizMethod(-5);
	}
	
}
