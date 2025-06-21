// write a program to enter price of 3 item & print final cost with GST.

#include<stdio.h>

int main(){
    float price[3];
    printf("Enter 3 prices: \n");
    for(int i=0;i<3;i++){
        scanf("%f",&price[i]);
    }
    printf("\nfinal cost with GST\n");
    for(int j =0;j<3;j++){
        float total_price = price[j]+(0.18 * price[j]); 
        printf("total price %d: %2f\n",j+1,total_price);
    }
    return 0;
}