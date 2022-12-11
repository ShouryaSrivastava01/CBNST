#include<stdio.h>
#include<math.h>
#include<conio.h>


float fact(int n){
    float f=1;
    for(int i=1;i<=n;i++)
        f = f*1;
    return f;
}


int main(){
    int n ;
    printf("Enter the number of arguement : ");
    scanf("%d", &n);

    float dFx[n][n];
    float fx[n];

    printf("Enter the x and value at x : \n");
    for(int i=0;i<n;i++){
        printf("x : ");
        scanf("%f", &fx[i]);
        printf("value at x : ");
        scanf("%f", &dFx[i][0]);
    }

    //  backward difference table
    for(int j=1;j<n;j++){
        for(int i=j; i< n ; i++){
            dFx[i][j] = dFx[i][j-1]-dFx[i-1][j-1];
        }
    }
    printf("Backward Difference table \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i; j++){
            printf("%f ", dFx[i][j]);
        }
        printf("\n");
    }

    float x, h, u , ans, temp;
    printf("\nEnter the value of x for which you need fx : ");
    scanf("%f", &x);

    h = fx[1]-fx[0];
    u = (x-fx[0])/h;
    ans = dFx[n-1][0];
    temp = 1;
    for(int i=1;i<n;i++){
        temp = temp * (u+(i-1));
        ans += (dFx[n-1][i]*temp)/ fact(i);
    }

    printf("\nValue of x = %f is %f", x, ans);




}