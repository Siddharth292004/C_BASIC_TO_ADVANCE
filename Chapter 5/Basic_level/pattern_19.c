#include<stdio.h>

int main(){
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i =1;i<=n;i++){
		int a = 1;
		for(j=1;j<=i;j++){
			if(i%2!=0){
				printf("%d",j);
			}
			else{
				int d = a + 64;
				char ch = (char)d;
				printf("%c",ch);
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}
