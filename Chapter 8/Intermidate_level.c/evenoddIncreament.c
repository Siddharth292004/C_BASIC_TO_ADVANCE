/*
  given an array of integers change the values of all odd indexed 
  elements to its second multiple and increment all even indexed 
  value by 10
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elemnents: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int k =1;k<n+1;k++){
       scanf("%d",&arr[k]);
    }

    for(int j =1;j<n+1;j++){
        if(j%2!=0){
         arr[j] *=2;
        }
        else{
            arr[j]+=10;
        }
    }  
    printf("After updated array:\n");
     for(int k =1;k<n+1;k++){
       printf("%d ",arr[k]);
    } 
    return 0;
}