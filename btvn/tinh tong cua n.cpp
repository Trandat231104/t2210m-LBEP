#include <stdio.h>
int main()
{
	int n;
	printf("nhap so  :");
	scanf("%d", &n);
	int tong=0;
	int i =0;
	while(i<=n){
		tong=tong+i;
		i++;
	}
	printf("\n tong can tim la :%d",tong);
	
}
