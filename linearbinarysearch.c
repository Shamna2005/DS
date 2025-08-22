#include <stdio.h>
int learserch(int ar[],int x,int nu)
{
for(int i=0;i<nu;i++)
{
if(ar[i]==x)
{
return i;
}
}
return -1;
}
int main()
{
int num,n,arr[100],i;
printf("enter the the limit of an array");
scanf("%d",&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the elements of an array \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("enter the search element in the array");
scanf("%d",&num);
int result=learserch(arr,num,n);
if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
return 0;
}
