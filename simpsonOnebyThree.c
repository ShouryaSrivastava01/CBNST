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
    ans = (f(a)+f(b));
    

    for(int i=1;i<n;i++){

        // even term 2*f(a+ih)
        if(i%2==0)
            ans += 2*f(a+i*h);

        // odd term 4*f(a+ih)
        else 
            ans += 4*f(a+i*h);
        
    

    }
    //  multiply whole by h/3
    ans = (ans*h)/3.0;

    printf("Integral value of given function is  %.4f", ans);


}