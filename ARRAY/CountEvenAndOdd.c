// Count Even and Odd Numbers
#include <stdio.h>
int size;
int odd = 0;
int even = 0;
int main()
{
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &size);
    int array[size];

    printf("ENTER THE ELEMENT OF ARRAY : \n");
    for (int i = 0; i < size; i++)
    {
        printf("array [%d] = ", i);
        scanf("%d", &array[i]);
        if (array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("THE EVEN NUMBER : %d\n",even);
    printf("THE ODD NUMBER : %d",odd);
    return 0;
}
