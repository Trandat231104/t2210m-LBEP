#include <stdio.h>
int main ()
{
int i;
int n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int dem=0;
int sum=0;
int tbl;
for(i=0;i<n;i++)
{
	if(arr[i]%2!=0)
{
	sum=sum+arr[i];
	dem++;
	}
	tbl=float(sum/dem);
printf("kq=%f",tbl);	
}
}

