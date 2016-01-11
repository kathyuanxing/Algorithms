#include<stdio.h>
#include<stdlib.h>
#define LEN 10
void main()
{
    int i,n,position;
    int arr[LEN]={1,3,5,7,9,11,12,14,16,19};
    for(i=0;i<LEN;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("please type the number you want to find:");
    scanf("%d",&n);
    position=binarySearch(arr,LEN,n);
    printf("the position of the number is:");
    printf("%d",position);
}
int binarySearch(int a[],int len, int number)
{
    int left=0,right=len-1;
    int middle;
    while(right>=left)
    {
        middle=(right+left)/2;//int middle=left + ((right-left)>>1);
        printf("%d %d %d ",left,right,middle);
        if(a[middle]<number)
        {
            left=middle+1;
        }
        else if(a[middle]>number)
        {
            right=middle-1;
        }else
        {
            return middle;
        }
    }
    return -1;
}
