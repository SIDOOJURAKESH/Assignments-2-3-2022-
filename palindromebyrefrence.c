#include <stdio.h>
#define check_palindrome(X) (X==1) ? printf("Number is palindrome\n") : printf("Number is not a Palindrome\n")

void palindrome(int ,int *);

int main()
{
    int x,a,flag=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    palindrome(x,&a);
    if(x!=a)
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
    check_palindrome(flag);
    return 0;
}


void palindrome(int n,int *p)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    *p=rev;
}
