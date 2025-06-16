// Find the reverse of a number (e.g., 123 → 321).

#include<stdio.h>

int main(){
    int num;
    int lastDigit,sum =0;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    while(num > 0){
        lastDigit = num % 10;
        sum = sum * 10 + lastDigit;
        num /=10;
        
    }

    printf("Reverse of a number: %d",sum);
    return 0;

}