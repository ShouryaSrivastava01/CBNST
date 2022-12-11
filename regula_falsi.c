/*
Name : Shourya Srivastava
Section : CE
Roll NO : 2017377 (38)
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

float fn(float x){
    return x*log10(x)-1.2;
}


int main(){
    float xo, x1, f0, f1;
    while(1){
    printf("Enter the initial guesses ");
    scanf("%f", &xo);
    scanf("%f", &x1);
    f0 = fn(xo);
    f1 = fn(x1);
    if(f0*f1>0.0) printf("Invalid guess please try agian\n");
    else break;
    }
    float e;
    printf("Enter the tolerate error : ");
    scanf("%f", &e);
float n,f;

    do{
        

        n = xo - (xo-x1) * f0/(f0-f1);
        f = fn(n);
        if(f== 0.0f){
            break;
        }
        else if(f*f0<0) {
            x1 = n;
            f1 = f;
        }
           
        else {
            xo = n;
            f0 = f;
        }
    }while(fabs(f)>e);

    printf("root %f", n);

}