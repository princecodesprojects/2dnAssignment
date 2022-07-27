#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("number is %d is %d",a,b);
    getch();
    return 0;
}