#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int *arr = (int*) malloc(size * sizeof(int));

    printf("Enter elements :\n");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements:\n");
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    free(arr);

    return 0;

}