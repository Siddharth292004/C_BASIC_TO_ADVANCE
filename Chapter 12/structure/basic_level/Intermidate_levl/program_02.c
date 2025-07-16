// Create a structure 'dates ' that contains three members namely dates ,month and year,
// create 2 structure variable dwith in different dates and compare the two if the dates
// equal then display message as Equal otherwise Unequal.

#include <stdio.h>
#include <stdbool.h>

typedef struct dates
{
    int day;
    int month;
    int year;
} dates;

int main()
{
    dates a, b;

    // Assigning values
    a.day = 5;
    a.month = 12;
    a.year = 2000;

    b.day = 5;
    b.month = 12;
    b.year = 2000;


    // if(a ==b){
    //     printf("dates are equal");
    // }
    // we can compare int ,float .character.bout we does ont compare two user define data type

    // Compare
    bool Flag = true;

    if (a.day != b.day)
        Flag = false;
    if (a.month != b.month)
        Flag = false;
    if (a.year != b.year)
        Flag = false;

    if (Flag == true)
    {
        printf("The dates are equal\n");
    }
    else
    {
        printf("The dates are unequal\n");
    }

    return 0;
}


