#include<stdio.h>
#include<conio.h>
int main()
{
    int amount;
     printf("Emter your money in INR\n");
     scanf("%d",&amount);
     float usd=amount*76.23;
     printf(" your money in USD is %f\n",usd);
     getch();
    return 0;
}