#include<stdio.h>
int main()
{
    int a[5]={1,6,7,8,9},b=0, mid,search,i,min=0,max=4;
    search=9;
    int c=0;
    printf("Liner search\n");
    for(i=0; i<5; i++)
    {
        if(search==a[i])
        {
            printf("%d is found at %d pos", search,i+1);
            break;
        }
        c++;
        if(i==5)
        printf("%d not found",search);
    }
    printf("linear search times %d",c);
   printf("Binary search\n");
    mid=(min+max)/2;
    while(min<=max)
    {
        if(a[mid]<search)
        {
            min=mid+1;
            mid=(min+max)/2;
            b++;
            if(a[mid]==search)
            {
                printf("%d is foun at %d pos",search,mid+1);
                break;
            }
        }
        else if(a[mid]==search)
        {
            printf("%d is foun at %d pos",search,mid+1);
            break;
        }
        else
        {
            max=mid-1;
            mid=(min+max)/2;
            b++;
            if(a[mid]==search)
            {
                printf("%d is foun at %d pos",search,mid+1);
                break;
            }
        }

    }
    printf("search times %d",b);
    if(i==5)
    {
        printf("%d not found",search);
    }

}
