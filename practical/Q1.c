#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;

    for(int i=0;i<=2;i++){
        sum =sum+arr[1][i];
    }
    printf("%d",sum);
    return 0;
}