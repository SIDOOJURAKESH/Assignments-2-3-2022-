#include <stdio.h>
#define EVEN(X) (X==1) ? printf("Number is a even\n") :  printf("Number is not a even\n")
#define ODD(X) (X==1) ? printf("Number is a ODD\n") :  printf("Number is not ODD\n")

int even(int );
int odd(int );

enum check{No,Yes};

int main()
{
    int num,x,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("1.Even\n2.Odd\n");
    printf("Enter above choice: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1: x=even(num);
                 EVEN(x);
            break;
        case 2: x=odd(num);
                  ODD(x);
                break;
        default: break;
    }
    return 0;
}

int even(int n)
{
    if(n%2==No)
    {
        return Yes;
    }
    else
    {
        return No;
    }
}


int odd(int n)
{
    if(n%2==Yes)
    {
        return Yes;
    }
    else
    {
        return No;
    }
}
