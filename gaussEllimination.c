#include<stdio.h>

int main(){
    int n;
    printf("Enter the no of unknowns : ");
    scanf("%d", &n);

    float ag[n][n+1], ratio;

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++)
            scanf("%f", &ag[i][j]);
        
    }

    // creating upper triangular matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                ratio = ag[j][i]/ ag[i][i];
                for(int k=0;k<n+1;k++){
                    ag[j][k] -= ratio*ag[i][k];
                }
            }
            
        }
    }
    float value[n], sum;
    value[n-1] = ag[n-1][n]/ ag[n-1][n-1];
    for(int i=n-2;i>=0;i--){
        sum = 0;
        for(int j=i+1;j<n;j++){
            sum+=ag[i][j]*value[j];
        }
        value[i] = (ag[i][n]- sum)/ ag[i][i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++)
            printf("%.2f ", ag[i][j]);
        printf("\n");
    }

    for(int i=0;i<n;i++){
        printf("%.2f\t", value[i]);
    }
}
