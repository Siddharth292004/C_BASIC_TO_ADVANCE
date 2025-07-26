#include<stdio.h>

int main(){
	int n;
	int i,j,k;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		  int a =1;
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			int d = a + 64;
			char ch = (char)d;
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}
	return 0;
	
	
}
