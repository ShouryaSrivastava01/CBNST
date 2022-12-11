#include<stdio.h>
#include<math.h>
#include<conio.h>

// definition of the function fx
float f(float x){
    return 1/(1+x*x);
}

int main(){
    float a, b, h, n, ans;

    printf("Enter the Lower Limit : ");
    scanf("%f", &a);

    printf("Enter the Upper Limit : ");
    scanf("%f", &b);

    printf("Enter the number of steps : ");
    scanf("%f", &n);

    // calculating grid spacing
    h = (b-a)/ n;

    // (f(a)+f(b))/2;
    ans = (f(a)+f(b))/2.0;
    

    for(int i=1;i<n;i++){
        ans += f(a+i*h);
    }
    //  multiply whole by h
    ans = ans*h;

    printf("Integral value of given function is  %.2f", ans);


}