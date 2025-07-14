#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[40];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            break;
        }
        printf("without vowel: %c", ch);
    }
    return 0;
}