#include<stdio.h>
#include<math.h>
#include<conio.h>

float dydx(float x, float y){
   return (x + y + x * y);
}


int main(){
    float x0, x, h, y;
    int n;

    printf("Enter the value of xo : ");
    scanf("%f", &x0);

    printf("Enter the value at x = %.2f :", x0);
    scanf("%f", &y);

    printf("Enter the value of step size i.e h : ");
    scanf("%f", &h);

    printf("Enter the value for which we need approximation : ");
    scanf("%f", &x);

    while(x0<x){
        y =y + h*dydx(x0,y);
        x0 =x0+h;
    }
    printf("Value at %.2f is : %.4f", x, y);
}