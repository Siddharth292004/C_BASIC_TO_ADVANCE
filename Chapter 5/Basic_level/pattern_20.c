#include<stdio.h>

int main (){
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i =1;i<=n;i++){
		for(j =1;j<=n;j++){
			int a = (n+1)/2;
			if(j == a || i == a){
				printf("*");
			}
			else{
				printf(" ");
			}			
		}
		printf("\n");
			
	}
	return 0;
}
