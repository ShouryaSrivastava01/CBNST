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

    // (f(a)+f(b));
    ans = (f(a)+f(b));
    

    for(int i=1;i<n;i++){

        // term multiple of 3 then 2f(a+i*h)
        if(i%3==0)
            ans += 2*f(a+i*h);
        else 
            ans += 3*f(a+i*h);

    }
    //  multiply whole by 3h/8
    ans = (3*ans*h)/8.0;

    printf("Integral value of given function is  %.4f", ans);


}