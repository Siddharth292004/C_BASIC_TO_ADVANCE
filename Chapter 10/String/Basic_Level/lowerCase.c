#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Enter the string: ");
	fgets(str,sizeof(str),stdin);
	
	str[strcspn(str,"\n")] ='\0';
	
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] >='A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("Uppercase: %s\n",str);
	return 0;
}
