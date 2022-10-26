#include<stdio.h>
int main()
{
	float n; 
	printf("nhap so :");
	scanf("%f" ,&n);
	float i=1;
	float sum=0;
	while(i<=n){
		sum+=1/i;
		i++;
	}
	printf("\n dap an bai toan la :%f",sum);
	
}
