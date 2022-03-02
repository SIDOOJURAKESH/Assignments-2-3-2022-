#include<stdio.h>
#define AREA_RECTANGLE(l,b) l*b
int findarea(int l,int b);
int main()
{
    int area,l,b;
    printf("enter the length and weidth: \n");
    scanf("%d%d",&l,&b);
    area=findarea(l,b);
    printf("Area of rectangle:%d",area);
}
int findarea(int l,int b)
{
    int area;
    area= AREA_RECTANGLE(l,b);
    return area;
}
