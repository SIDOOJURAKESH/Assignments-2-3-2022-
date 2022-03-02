#include<stdio.h>
void fibonacciSeries(int num);
int main()
{
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    printf("The fibonacci series is: \n");
    fibonacciSeries(num);
    return 0;
}
void fibonacciSeries(int num)
{
    int x=0, y=1, c;
    while (x<=num)
    {
        printf("%d\t", x);
        c = x+y;
        x = y;
        y = c;
    }
}
