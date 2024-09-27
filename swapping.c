#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values of number");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("afterswapping a=%d,b=%d",a,b);
    return 0;
}
