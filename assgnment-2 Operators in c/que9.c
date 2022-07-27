#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    n=sizeof(int);
    printf("size of int is %d\n",n);
    printf("size of float is %d\n",sizeof(float));
    printf("size of char is %d\n",sizeof(char));
    printf("size of double is %d\n",sizeof(double));
    getch();
    return 0;
}