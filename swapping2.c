#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of number");
    scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;

    printf("afterswapping a=%d,b=%d",a,b);
    return 0;
}
