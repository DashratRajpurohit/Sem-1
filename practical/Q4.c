#include<stdio.h>

int main(){
    char n = 'z';

    if(n == 'a' || n=='e' || n=='i'|| n=='o'||n=='u'){
        printf("%c is vowel",n);
    }
    else{
        printf("consonent");
    }
    

    return 0;
}