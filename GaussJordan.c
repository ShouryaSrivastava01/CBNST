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
            if(i!=j){
                ratio = ag[j][i]/ ag[i][i];
                for(int k=0;k<n+1;k++){
                    ag[j][k] -= ratio*ag[i][k];
                }
            }
            
        }
    }
    float value[n];
    for(int i=0;i<n;i++){
        value[i] = ag[i][n]/ag[i][i];
    }

    for(int i=0;i<n;i++){
        printf("%.2f\t", value[i]);
    }
}