#include<iostream>
#include<cmath>
using namespace std;

int adiff(int A, int B){
    int d = abs(A-B)%360;
        if(d>180){
            d = 360-d;
        }
    return d ;
}





