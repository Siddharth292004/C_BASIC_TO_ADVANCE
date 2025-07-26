#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    bool flag;

    for (int i = 0; i < 5; i++) {
        flag = true;  

        for (int j = 0; j < 5; j++) {
            if (i !=j && arr[i] == arr[j]) {
                flag = false;
                break;
            }
        }

        if (flag == true) {
            printf("%d is the first unique element.\n", arr[i]);
            return 0;
        }
    }

    return 0;
}
