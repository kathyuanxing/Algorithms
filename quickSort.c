#include<stdio.h>
#include<stdlib.h>
//quick sort
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    quickSort(a,0,9);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
void quickSort(int arr[],int left,int right)
{
    int i,j,t,pivot;
    if(left>right)
        return;
    pivot=arr[left];
    i=left;
    j=right;
    while(i!=j)
    {
        while(arr[j]>=pivot && i<j)
            j--;
        while(arr[i]<=pivot && i<j)
            i++;
        if(i<j)
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    arr[left]=arr[i];
    arr[i]=pivot;

    quickSort(arr,left,i-1);
    quickSort(arr,i+1,right);
}
