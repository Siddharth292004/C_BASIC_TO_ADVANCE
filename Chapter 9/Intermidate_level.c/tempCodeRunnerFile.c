#include<stdio.h>
#include<stdbool.h>

int main(){
    int size;
    int duplicate;
    bool flag;

    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int arr[size];

    printf("Enter the element: ");
    for(int i =0;i<size;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j =0;j<size;j++){
        for(int k =1;k<size;k++){
            if(arr[j] ==arr[k]){
                 duplicate = arr[k];
                 flag  =true;
                 break;            
            }
        }
 
    }

    if(flag){
        printf("duplicate element found: %d.\n",duplicate);
    }
    else{
        printf("duplicate element not found.\n");
    }
    return 0;
}