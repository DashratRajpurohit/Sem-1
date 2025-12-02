#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int arr[3];
};


int main(){
    struct student s1;
    
    
    scanf("%d\n",&s1.id);
    scanf("%s\n",&s1.name);
    scanf("%d %d %d",&s1.arr[0],&s1.arr[1],&s1.arr[2]);

    printf("%d\n%s\n",s1.id,s1.name);
    printf("%d,%d,%d",s1.arr[0],s1.arr[1],s1.arr[2]);
    

    return 0;
}