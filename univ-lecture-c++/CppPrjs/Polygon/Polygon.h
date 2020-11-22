//
// Created by starm on 2020-11-18.
//

#ifndef CPPPRJS_POLYGON_H
#define CPPPRJS_POLYGON_H
#include <iostream>
#include <cstring>
#include <math.h>
#include "C2DStruct.h"
using namespace std;
double calc();

class Polygon {

    public:
        int vertexNumber;
        C2D *c2dArray;

    Polygon(int n, C2D* coordinateValues = nullptr): vertexNumber(n) {
        cout << "기본생성자" << endl;
        c2dArray = new C2D[n];
        if(coordinateValues)memcpy(c2dArray, coordinateValues, sizeof(C2D) * n) ;
    }

    Polygon(const Polygon& pv): vertexNumber(pv.vertexNumber){
        cout << "복사생성자" << endl;
        c2dArray = new C2D[vertexNumber];
        memcpy(c2dArray, pv.c2dArray, sizeof(C2D) * vertexNumber);
    }

    Polygon(Polygon&& pv): vertexNumber(pv.vertexNumber), c2dArray(pv.c2dArray){
        pv.c2dArray = nullptr;
        pv.vertexNumber = 0;
    }

    void print() const {

        for (int i =0; i< vertexNumber; i++){
            cout << (i + 1) << "번째 꼭짓점 [x:" << c2dArray[i].x << ",y:" <<  c2dArray[i].y << "]" << endl;
        }
    }

    void calc() const {
        double sum = 0;

        for(int i=0; i<vertexNumber; i++){
            sum += (c2dArray[i].x * c2dArray[i+1%vertexNumber].y) - (c2dArray[i+1%vertexNumber].x * c2dArray[i].y);
        }

        sum = fabs(sum) / 2;
        cout << "이 " << vertexNumber << "각형의 면적은 " << sum << "입니다" << endl;
    }

};

#endif //CPPPRJS_POLYGON_H
