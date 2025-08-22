#include <stdio.h>
void merge(int a[], int l, int mid, int u);
void mergesort(int a[],int l,int u)
{
int mid;
if(l<u)
{
mid=(l+u)/2;
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(int a[],int l,int mid,int u)
{
int n1=mid-l+1,n2=u-mid;
int L[n1],R[n2];
for(int i=0;i<n1;i++)
{
L[i]=a[l+i];
for(int j=0;j<n2;j++)
{
R[j]=a[mid+1+j];
}
}
int i=0,j=0,k=l;
while(i<n1&&j<n2)
{
if(L[i]<R[j]){
a[k]=L[i];
i++;
}
else{
a[k]=R[j];
j++;
}
k++;
}
while(i<n1)
{
a[k]=L[i];
i++;
k++;
}
while(j<n2)
{
a[k]=R[j];
j++;
k++;
}
}
int main()
{
int arr[10],i,n,l,u;
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
l=0;
u=n-1;
mergesort(arr,l,u);
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
