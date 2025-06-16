#include<stdio.h>

int main(){
    int n,i,is_prime = 1;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i =2;i<= n/2;i++){
        if(n % 2 == 0){
            is_prime = 0;
            break;
        }
    }
  
    if(is_prime){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }

    return 0;
}