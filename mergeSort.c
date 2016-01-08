#include<stdio.h>
#include<stdlib.h>
//merge sort
void mergeSort(int arr[],int first,int last,int temp[]);
void mergearray(int a[],int first,int mid,int last,int temp[]);
void main()
{
    int i,a[10],t[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,9,t);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
void mergeSort(int arr[],int first,int last,int temp[])
{
    if(first<last)
    {
        int mid=(first+last)/2;
        mergeSort(arr,first,mid,temp);//left sort
        mergeSort(arr,mid+1,last,temp);//right sort
        mergearray(arr,first,mid,last,temp);//merge two sorted array
    }
}
void mergearray(int a[],int first,int mid,int last,int temp[])
{
    int i=first,j=mid+1;
    int m=mid,n=last;
    int k=0;
    while(i<=m&&j<=n)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=m)
        temp[k++]=a[i++];
    while(j<=n)
        temp[k++]=a[j++];
    for(i=0;i<k;i++)
        a[first+i]=temp[i];
}
