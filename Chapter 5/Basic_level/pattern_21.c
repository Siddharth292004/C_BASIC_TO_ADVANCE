#include <stdio.h>

int main()
{
        int n = 4;
        int i, j;

        for (i = 1; i <= n; i++)
        {
                int a = 1;
                for (j = 1; j <= n + 1 - i; j++)
                {
                        int d = a + 64;
                        char ch = (char)d;
                        printf("%c ", ch);
                        a++;
                }
                printf("\n");
        }

        return 0;
}