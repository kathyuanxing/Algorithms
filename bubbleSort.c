#include<stdio.h>
#include<stdlib.h>
//bubble sort
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
void bubbleSort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
