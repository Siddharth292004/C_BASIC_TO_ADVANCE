// find difference between the sum of element of even indicts to the sum of 
// element at odd indices

#include<stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5};
    int sumOdd =0;
    int sumEven = 0;

    for(int i=0;i<6;i++){
        if(i%2!=0){
            sumOdd +=arr[i];  // 2 + 4 =  6
        }
        else{
            sumEven +=arr[i]; // 1 + 3 + 5 = 9
        }

    } 
    int result = sumEven-sumOdd;  // 3
    printf("difference %d",result);

    return 0;
}