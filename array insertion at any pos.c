#include<stdio.h>
int main()
{
    int a[10],nv,ni,n,i;
    printf("Enyter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);
    printf("enter the value uh wanna insert .");
    scanf("%d",&nv);
    printf("enter the index uh wanna insert \n");
    scanf("%d",&ni);
    for(i=n; i>=ni; i--)
    {
        a[i+1]=a[i];
    }
    a[ni]=nv;
    printf("Arrray after insertion\n");
    for(i=0; i<n+1; i++)
    {
        printf(" %d",a[i]);
    }
}
