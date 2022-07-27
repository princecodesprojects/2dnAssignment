#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d;
    printf("Emter a number\n");
    scanf("%d",&n);
    printf("Emter a digit\n");
    scanf("%d",&d);
    n=n*10;
    n=n+d;
    printf( "number is %d\n",n);
    getch();
    return 0;
}