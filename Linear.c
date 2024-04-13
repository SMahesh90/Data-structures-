/*program for linear search*/
#include<stdio.h>
int linearsearch(int [],int ,int );
int main()
{
    int a[30],n,i,key,pos;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter the n elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search :");
    scanf("%d",&key);
    
    pos=linearsearch(a,n,key);
    if(pos==-1)
    {
        printf("search is unsuccessful .");
    }
    else
    {
        printf("search is successful,key found at the index :%d",pos);
        return 0;
    }
}
int linearsearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    
        if(a[i]==key)
        return i;
    
    return -1;
}
