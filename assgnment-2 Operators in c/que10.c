#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Emter a number\n");
    scanf("%d",&n);
    n=n/10;
    n=n*10;
    printf( "number is %d\n",n);
    getch();
    return 0;
}
