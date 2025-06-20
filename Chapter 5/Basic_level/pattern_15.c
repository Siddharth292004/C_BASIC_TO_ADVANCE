<<<<<<< HEAD:CHPTER 5/Basic_level/pattern_15.c
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
=======
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++){
        int a = 1;
         for(int j =1;j<=n;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%d",ch);
            a++;
>>>>>>> ecfda4de4b1ca5a32e1b04e4b1a01c24d3f9d276:Chapter 5/Basic_level/pattern_15.c
        }
        printf("\n");
    }
    return 0;
<<<<<<< HEAD:CHPTER 5/Basic_level/pattern_15.c
}
=======
}
>>>>>>> ecfda4de4b1ca5a32e1b04e4b1a01c24d3f9d276:Chapter 5/Basic_level/pattern_15.c
