#include<stdio.h>

int main(){
	int n;
	int i,j;
	printf("Enter the number: ");
	scanf("%d",&n);
	int nst =1;
	for(i =1;i<=n;i++){
		for(j=1;j<=nst;j++){
			printf("*");
		}
		nst = nst+2;
		printf("\n");
	}
	return 0;
}
