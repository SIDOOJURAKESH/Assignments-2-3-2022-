#include<stdio.h>

void fibonacciSeries(int *);
int main()
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    printf("The fibonacci series is: \n");
    fibonacciSeries(&num);
    return 0;
}
void fibonacciSeries(int *num)
{
    int a=0,b=1,c=0;
    int *x,*y;
    x=&a;
    y=&b;
    while (*x<=*num)
    {
        printf("%d\t",*x);
        c = *x+*y;
        *x = *y;
        *y = c;
    }
}
