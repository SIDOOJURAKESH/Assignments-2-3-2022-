#include <stdio.h>
#define check_palindrome(X) (X==1) ? printf("Number is palindrome\n") : printf("Number is not a Palindrome\n")
int palindrome(int );
int main()
{
    int x,p;
    printf("Enter a number: ");
    scanf("%d",&x);
    p=palindrome(x);
    check_palindrome(p);
    return 0;
}


int palindrome(int n)
{
    int r,rev=0,temp,flag=0;
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp!=rev)
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
    return flag;
}
