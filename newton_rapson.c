#include<stdio.h>
#include<stdlib.h>
#include<Math.h>

#define Tolerate 0.0001

double f(double x){
    // x^3 - 2x^2 + 4x + 5
    return x*x -6;
    // return cos(x)-3*x+1;
}

double df(double x){
    // 3x^2 - 4x + 4
    return 2*x;
    // return sin(x)-3;
}

double newtonRapson(double xo){
    double fByDf = f(xo)/df(xo);
    int step = 1;
    printf("Steps\t\txo\t\tf(xo)\n");
    while(fabs(fByDf)>=Tolerate){
        

        fByDf = f(xo)/df(xo);
        xo= xo-fByDf;

        printf("%d\t\t%lf\t%lf\n", step++,xo,f(xo));

    }

    return xo;

}


int main(){
    double xo;
    printf("Enter the initial guess : ");
    scanf("%lf", &xo);

    printf("The root value is %lf",newtonRapson(xo));



}
