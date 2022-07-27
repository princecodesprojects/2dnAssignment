#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a three digit number\n");
    scanf("%d",&n);
    int r=n%10;
    n=n/10;
    r=r*100;
    n=n+r;
    printf("new  number is %d\n",n);
    getch();
    return 0;
}