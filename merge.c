#include<stdio.h>
#include<stdlib.h>
void main()
{
int ar1[20],ar2[20],ar3[40];
int m,n;
void readarray(int[],int);
void printarray(int[],int);

void merge(int[],int[],int[],int,int);
printf("no of elements in 1 st array[1-20]:");
scanf("%d",&m);
printf("enter elemnts in non decreasing order:");
readarray(ar1,m);
printf("no of elements in2nd array:");
scanf("%d",&n);
printf("enter elements in non decresing order:");
readarray(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("merged array:\n");
printarray(ar3,m+n);
}
void readarray(int a[],int n)
{
int i;
for(i=0;i<n;++i)
scanf("%d",&a[i]);
}`
void printarray(int ar[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",ar[i]);
return;
}
void merge(int a[],int b[],int c[],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m&&j<n)

if(a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{c[k]=b[j];
j=j+1;
}
while(i<m)
c[k++                                                                                                                                                                                                                             ]=a[i++];
while(j<n)
c[k++]=b[j++];
}
