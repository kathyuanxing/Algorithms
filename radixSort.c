#include<stdio.h>
#include<stdlib.h>

#define RADIX_10 10 //Decimal
#define KEYNUM_31 10 //number of integer
//radix sort
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    radixSort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
int GetNumInPos(int num,int pos)
{
    int temp=1;
    int i;
    for(i=0;i<pos-1;i++)
    {
        temp *=10;
    }
    return (num/temp)% 10;
}
void radixSort(int* a,int num)
{
    int *radixArrays[RADIX_10]; //0-9 two dimension array
    int i,j,pos,k;
    for(i=0;i<10;i++)
    {
        radixArrays[i]=(int *)malloc(sizeof(int)*(num+1)); //space
        radixArrays[i][0]=0; //count
    }
    for(pos=1;pos<=KEYNUM_31;pos++)
    {
        for(i=0;i<num;i++)
        {
          int num=GetNumInPos(a[i],pos);
          int index=++radixArrays[num][0];
          radixArrays[num][index]=a[i];
        }
        for(i=0,j=0;i<RADIX_10;i++)
        {
           for(k=1;k<=radixArrays[i][0];k++)
           {
               a[j++]=radixArrays[i][k];//collect
           }
           radixArrays[i][0]=0;//reset
        }
    }
}
