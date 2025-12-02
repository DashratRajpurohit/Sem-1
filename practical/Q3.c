#include<stdio.h>

int main(){
    int n = 7;
    int num1 = 0;
    int num2 = 1;
    int c = 0;
    printf("%d,%d,",num1,num2);

    for(int i=3;i<=n;i++){
        c= num1+num2;
        printf("%d,",c);
        num1=num2;
        num2=c;
    }
    

    return 0;
}