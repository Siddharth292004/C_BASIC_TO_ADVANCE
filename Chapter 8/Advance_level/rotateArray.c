#include<stdio.h>

void reverse(int arr[], int st, int ed){
    int i = st;
    int j = ed;

     while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original array:\n");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }

    int rotate;
    printf("\nEnter the rotate term: ");
    scanf("%d", &rotate);
    
    rotate = rotate % size;  // Handles rotation greater than size

    // Rotate array to the right by 'rotate' positions
    reverse(arr, 0, size - 1);
    reverse(arr, 0, rotate - 1);
    reverse(arr, rotate, size - 1);
  
    printf("After rotate array:\n");
    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]); 
    }

    return 0;
}
