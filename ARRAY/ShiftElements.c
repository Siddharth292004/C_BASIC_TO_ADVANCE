#include <stdio.h>
int main()
{
    int i;
    int size;
    int last;
    // TAKE SIZE AS INPUT 
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);
    int arr[size];
    // TAKE ELEMENT IN ARRAY NAME AS ARR[];
    printf("ENTER THE ELEMENTS :\n");
    for (i = 0; i < size; i++)
    {
        printf(" arr[%d] : ", i + 1);
        scanf("%d",&arr[i]);
    }
    //THE LAST ELEMENT IN THE ARRAY STORE IN VARIABLE LAST
    last = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    //THE LAST ELEMENT WHICH WE STORE IN LAST NOW STORE IN FIRST 
    arr[0] = last;
    //DISPLAY ALL THE ELEMENT OF ARRAY AFTER SHIFTING
    printf("AFTER THE SHIFT ELEMENTS ARE :\n");
    for (i = 0; i < size; i++)
    {
        printf(" arr[%d] : %d\n", i + 1, arr[i]);
    }
    return 0;
}
