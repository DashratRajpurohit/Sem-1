#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%c %d %d",&op,&a,&b);

    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        if(b!=0){
         printf("%d",a/b);
        }
        else{
            printf("divide with 0 is not posible");
        }
       
        break;
    
    default: printf("invalid oprator");
        break;
    }

    return 0;
}