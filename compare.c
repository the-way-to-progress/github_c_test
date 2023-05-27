#include<stdio.h>
int min(int a,int b);/*函数的原型*/
int main(void)
{   
    int evil1,evil2;
    printf("Enter a pair of integers:\n");
    while (scanf("%d %d",&evil1,&evil2)==2)
    {
        printf("The lesser of %d and %d is %d.\n",
        evil1,evil2,min(evil1,evil2));/*使用函数，主调函数，实参*/
        printf("Enter a pair of integers:\n");
    }
    printf("Bye.\n");
    return 0;
}
int min(int a,int b)/*函数的定义，被调函数中的形参*/
{   
    int min;
        if(a<b)
        min=a;
    else
        min=b;
    return min;
}