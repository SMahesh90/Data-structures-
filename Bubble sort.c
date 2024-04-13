/*program for bubble sor*/
#include<stdio.h>
void bubblesort(int [],int );
int main()
{
    int n,a[20],i;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter n elements :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("elements after sorting :\n");
    for(i=0; i<n; i++)
    {
        printf("%5d",a[i]);
    }
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<(n-1-i); j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
