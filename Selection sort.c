/*program for selection sort*/
#include<stdio.h>
void selectionsort(int [],int);
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
    selectionsort(a,n);
    printf("elements after sorting :");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}
void selectionsort(int a[],int n)
{
    int i,j,minpos,temp;
    for(i=0;i<n-1;i++)
    {
        minpos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minpos])
            {
                minpos=j;
                {
                 temp=a[i];
                 a[i]=a[minpos];
                 a[minpos]=temp;
                }
            }
        }    
    }
}       
