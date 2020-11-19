//
// Created by starm on 2020-11-18.
//

#include <iostream>
using namespace std;
#include "C2DStruct.h"
#include "Polygon.h"
int main(){
    C2D coordinateValues[4] = {{0,0} , { -4.5,0 },{-4.5,-4.5}, {0,-4.5}};
    Polygon p1(4, coordinateValues);

    p1.print();


    return 0;
}