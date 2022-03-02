#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    int *p,*q,n,i,j,temp;
    printf("1.malloc\n2.calloc\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
       printf("enter the no of integers to be entered: ");
        scanf("%d",&n);
        p=(int *)malloc(n*sizeof(int));
        if(p==NULL)
        {
            printf("no space is available\n");
            exit(1);
        }
        for(i=0;i<n;i++)
        {
            printf("enter an integer: ");
            scanf("%d",p+i);
         }
         for(i=0;i<n;i++)
         //printf("address of elements:%d%d\n",p+i,*(p+i));
         //printf("%d\t",*(p+i));
         printf("Address of *(p+%d): %p\tElement of %d index position: %d\n",i,*(p+i),i,*(p+i));
         j=n-1;
         i=0;
         while(i<j)
         {
          temp=*(p+i);
         *(p+i)=*(p+j);
         *(p+j)=temp;
         i++;
         j--;
         }
          for(i=0;i<n;i++)
         {
        printf("reverse order");
         printf("Address of *(p+%d): %p\tElement of %d index position: %d\n",i,*(p+i),i,*(p+i));
        
         }

        free(p);
         break;
    
        case 2:
         printf("enter the no of integers to be entered: ");
        scanf("%d",&n);
        q=(int *)calloc(n,sizeof(int));
        if(q==NULL)
        {
            printf("no space is available\n");
            exit(1);
        }
        for(i=0;i<n;i++)
        {
            printf("enter an integer: ");
            scanf("%d",q+i);
         }
         for(i=0;i<n;i++)
        // printf("%d\t",*(p+i));
        printf("Address of *(p+%d): %p\tElement of %d index position: %d\n",i,*(q+i),i,*(q+i));
          j=n-1;
         i=0;
         while(i<j)
         {
          temp=*(q+i);
         *(q+i)=*(q+j);
         *(q+j)=temp;
         i++;
         j--;
         }
          for(i=0;i<n;i++)
         {
        printf("reverse order");
         printf("Address of *(p+%d): %p\tElement of %d index position: %d\n",i,*(q+i),i,*(q+i));
         
         }
            free(q);
          break;

    default:
    printf("wroing choice\n");
    }
    return 0;
    }
    
    

