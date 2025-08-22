#include <stdio.h>
void selectsort(int arr[],int num)
{
int i,j,min,temp;
for(i=0;i<num-1;i++)
{
min=i;
for(j=i+1;j<num;j++)
{
if(arr[min]>arr[j])
{
min=j;
}
if(arr[i]!=arr[min])
{
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
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
selectsort(arr,n);
printf("sorted array\n");
for(int i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
