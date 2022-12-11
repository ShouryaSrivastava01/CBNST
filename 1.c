#include<stdio.h>
#include<math.h>
#include<conio.h>


float f(float x){
     return x*x-6;
}

float g(float x){
    return 2*x;
}

int main(){
    float xo, e, f1, m;
    printf("Enter the initial guess : ");
    scanf("%f", &xo);
    printf("Enter the tolerate limit : ");
    scanf("%f", &e);

    do{
        m = f(xo)/ g(xo);
        xo = xo-m;
        f1 = f(xo);
        
    }while(fabs(f1)>e);
    printf("The root %f", xo);
}