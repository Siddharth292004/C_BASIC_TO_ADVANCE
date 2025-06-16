/*
if cost price and selling price of an item is
input through the keyborad , write a program 
write a progrom to determine
wheter the seller has made progit or
incurred loss . also determine how much profit he
made or loss he incuured,
*/

#include<stdio.h>

int main(){
    float cp,sp,profit,loss;
    
    //input
    printf("Enter the cost price (cp): ");
    scanf("%f",&cp);
    printf("Enter the sell price (sp): ");
    scanf("%f",&sp);
    
    // conditions
    if(sp > cp){
        profit = sp - cp;
        printf("Profit = %f",profit);
    }
    else if(sp == cp){
        printf("No profit No loss");
    }
    else{
        loss = cp - sp;
        printf("Loss = %f",loss);
    }

    return 0;
}
