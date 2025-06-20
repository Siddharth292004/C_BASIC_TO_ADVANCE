#include<stdio.h>

int main(){
	int n;
	int i,j;
	printf("Enter the number: ");
	scanf("%d",&n);
	int nsp =1;
	for(i=1;i<=n;i++){	
		for(j=1;j<=2*i-1;j++){
			printf("*");

		}
		printf("\n");
	}
}
