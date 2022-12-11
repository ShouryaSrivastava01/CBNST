#include<stdio.h>
#include<math.h>
#include<conio.h>


float f(float x){
     return x*x*x-x*x*6-2*x;
}


int main(){
    float xo,x1, e, fo,f1,f2, x2;
    while(1){
        printf("Enter the initial guess : ");
        scanf("%f %f", &xo, &x1);
        fo = f(xo);
        f1 = f(x1);

        if(fo*f1>0) printf("Invalid guess\n");
        else break;
    }
    
    printf("Enter the tolerate limit : ");
    scanf("%f", &e);

    do{
        x2 =(xo+x1)/ 2.0;
        f2 = f(x2);

        if(f2*fo<0.0f){
            x1 = x2;
            f1 = f2;
        }
        else{
            xo = x2;
            fo = f2;
        }
    }while(fabs(f2)>e);
    printf("The root %f", x2);
}