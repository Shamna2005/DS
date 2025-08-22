#include<stdio.h>
int partition(int a[],int down,int up);
void quicksort(int a[],int down,int up)
{
if(down<up)
{
int l=partition(a,down,up);
quicksort(a,down,l-1);
quicksort(a,l+1,up);
}
}
int partition(int a[],int down,int up)
{
int p_index=down,pivot=a[down],temp;
while(down<up)  
{
while(a[down]<=pivot)
{
down++;
}
while(a[up]>pivot)
{
up--;
}
if(down<up)
{
temp=a[down];
a[down]=a[up];
a[up]=temp;
}
else
{
temp=a[p_index];
a[p_index]=a[up];
a[up]=temp;
}
return (up);
}
}                                                                                                                                   
int main()
{
int arr[10],i,n,down,up;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the element of the array\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("display array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
down=0;
up=n-1;
quicksort(arr,down,up);
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
