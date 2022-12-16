#include<stdio.h>

int main(){
    int n;
    printf("Enter the no of arguement : ");
    scanf("%d", &n);

    float x[n], y[n], a;

    printf("Enter the value of x and fx respectively \n");
    for(int i=0;i<n;i++){
        scanf("%f %f", &x[i], &y[i]);
    }
    printf("Enter the value for which fx is desired : ");
    scanf("%f", &a);

    // calculating answer;
    float sum, temp;
    sum = 0;
    for(int i=0;i<n;i++){
        temp = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                temp = temp* (a-x[j])/ (x[i]-x[j]);
            }
        }
        sum = sum + temp*y[i];
    }

    printf("Value of fx at %.2f is : %.2f", a, sum);
}