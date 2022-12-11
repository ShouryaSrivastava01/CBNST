#include<stdio.h>
#include<math.h>
#include<conio.h>

float dydx(float x, float y){
    return((x - y)/2);
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

    printf("Enter the value of x : ");
    scanf("%f", &x);

    // calculate the number of iteration 
    n = (x-x0)/h;

    float k1, k2, k3, k4;

    while(n--){

        k1 = h*dydx(x0, y);
        k2 = h*dydx(x0 + 0.5*h, y + 0.5*k1);
        k3 = h*dydx(x0 + 0.5*h, y + 0.5*k2);
        k4 = h*dydx(x0 + h, y + k3);

        // update the value of y
        y = y + (k1 + 2*k2 + 2*k3 + k4)/6.0;;
 
        // Update next value of x
        x0 = x0 + h;
    }
    printf("Value at %.2f is : %.4f", x, y);
}