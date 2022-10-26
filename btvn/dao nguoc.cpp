#include <stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	
	int x=0;
	while(n!=0){
	int sd =n%10;
	x=x*10+sd;
	n=n/10;
}

printf("so dao nguoc la :%d",x);
}
