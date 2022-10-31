#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int ary[a];
	int n ;
	for(int i=n-1;i<n;i--)
{
	scanf("%d",&ary[i]);
}
	for(int i=n-1;i<n;i--)
	{
		if(ary[i]%2!=0)
		{
			return ary[i];
			break;
		}
		return -1;
	}
}
