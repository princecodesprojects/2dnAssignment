#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a  digit number\n");
    scanf("%d",&n);
    int r=n&1;
    if(r)
    printf(" %d is odd",n);
    else
    printf(" %d is even",n);
    return 0;
}