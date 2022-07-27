#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    n=a;
    a=b;
    b=n;
    printf("Swappe number is %d and %d",a,b);
    getch();
    return 0;
}