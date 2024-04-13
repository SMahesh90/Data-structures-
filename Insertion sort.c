/*program for insertion sort*/
#include<stdio.h>
void insertionsort(int [],int);
int main()
{
    int a[20],n,i;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter the n elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("elements after sorting :");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}
void insertionsort(int a[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
    {
        item=a[i];
        for(j=i-1;j>=0&&a[j]>item;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=item;
    }
}
