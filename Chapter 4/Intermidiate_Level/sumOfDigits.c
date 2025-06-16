 // Find sum of digits of a number.

 #include<stdio.h> 

 int main(){
    int sum = 0,last_digits,num;
    
    printf("Enter the digits: ");
    scanf("%d",&num);

    while(num > 0){
        last_digits = num % 10;
        sum = sum + last_digits;
        num /=10;
    }
    printf("Sum of the digits %d",sum);
}