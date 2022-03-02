#include <stdio.h>
void swap1(int, int);
void swap2(int, int);
int main()
{
   int x,y,a,b;
   printf("enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("enter the value of a and b\n");
   scanf("%d%d",&a,&b);
   printf("In main function before calling swap fun \nx = %d\ny = %d\n", x, y);
   swap1(x, y); 
   printf("In main function before calling After calling swap fun\nx = %d\ny = %d\n", x, y);
   
   printf("In main function before calling swap fun \na = %d\nb = %d\n", a, b);
   swap2(a, b); 
   printf("In main function before calling After calling swap fun\na = %d\nb = %d\n", a, b);
   return 0;
}
void swap1(int x, int y)
{
   int temp;
   temp = x;
   x = y;
   y = temp;
    printf("Values of x and y in swap function after swapping: %d  %d\n",x,y);
}
void swap2(int a, int b)
{
   a=a+b;
   b=a-b;
   a=a-b;
 printf("Values of a and b in swap function after swapping: %d  %d\n",a,b);
}
