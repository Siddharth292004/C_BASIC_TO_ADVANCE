#include<stdio.h>

int main(){
	int n;
	int i,j,k;
	printf("Enter the number: ");
	scanf("%d",&n);
	int nst =1;
	for(i =1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=nst;j++){
			printf("%d",j);
		}
		nst = nst+2;
		printf("\n");
	}
	return 0;
}
