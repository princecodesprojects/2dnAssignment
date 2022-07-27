#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n)
    {
      sum=sum+n%10;
      n=n/10;
    }
    printf("sum digit ofis %d",sum);
    getch();
    return 0;
}