#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int u=n%10;
    printf("unit digit of %d is %d",n,u);
    getch();
    return 0;
}