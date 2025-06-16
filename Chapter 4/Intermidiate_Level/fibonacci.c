// Print Fibonacci series up to n terms.

#include<stdio.h>

int main(){
    int n;
    int first = 0;
    int second = 1;
    int temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", first);
        temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}
