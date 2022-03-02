#include<stdio.h>
#define AREA_RECTANGLE(l,b) l*b
int findarea(int *l,int *b);//*l is value where l is address and *b is value and b is address
int main()
{
    unsigned int area,l,b;
    printf("enter the length and weidth: \n");
    scanf("%d%d",&l,&b);
    area=findarea(&l,&b);//passing address as l and b parameters
    printf("Area of rectangle:%d",area);
}
int findarea(int *l,int *b)
{
    int area;
    area= AREA_RECTANGLE(*l,*b);
    return area;
}
