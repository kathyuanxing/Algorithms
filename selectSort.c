#include<stdio.h>
#include<stdlib.h>
//select sort
void main()
{
    int a[10],i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    selectSort(a,10);
    printf("排序后的数组：\n");
    for(i=0;i<10;i++)
        printf(" %d",a[i]);
}
void selectSort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
