// Check if a number is a palindrome (e.g., 121).

#include<stdio.h>

int main(){
    int num,lastdigit;
    int reverse = 0;

    printf("Enter the number: ");
    scanf("%d",&num);

    int original_num = num;

    while(num > 0){
        lastdigit = num % 10;
        reverse = reverse * 10 + lastdigit;
        num /=10;
    }

    if(original_num == reverse){
        printf("%d is a palindrome.\n",original_num);
    }
    else{
        printf("%d is not a palindrome. \n",original_num);
    }
    return 0;
}