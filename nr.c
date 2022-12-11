/*
Name : Shourya Srivastava
Section : CE
Roll NO : 2017377 (38)
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>



float f(float x) {
    return x*x - 6;
}

float g(float x){
     return 2*x;
}



int main(){
    float xo, x1, e;
    printf("Enter the initial guess ");
    scanf("%f", &xo);
    printf("Enter the tolerate limit ");
    scanf("%f", &e);

    do{
        float m = f(xo)/ g(xo);
        xo = xo - m;
    }while(fabs(f(xo))>e);
    printf("The root %f", xo);
}