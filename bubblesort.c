#include <stdio.h>
void bubllesort(int arr[],int num)
{
int i,j,temp;
for(i=0;i<num-1;i++)
{
for(j=0;j<num-i-1;j++)
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
int main()
{
int arr[10],i,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the element of the array\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("display array\n");
for(int i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
bubllesort(arr,n);
printf("sorted array\n");
for(int i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
