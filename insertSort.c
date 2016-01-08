#include<stdio.h>
#include<stdlib.h>
//insert sort
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    insertSort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
insertSort(int arr[],int len)
{
    int i,j;
    int key;
    for(i=1;i<len;i++)
    {
        key=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=key;
    }
}
