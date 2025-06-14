#include<stdio.h>

int main(){
    int hours,minutes,seconds;

    printf("Enter the hours:");
    scanf("%d",&hours);
    printf("Enter the minutes: ");
    scanf("%d",&minutes);
    printf("Enter the seconds: ");
    scanf("%d",&seconds);

    int totol_seconds = (hours * 3600) + (minutes * 60 ) + seconds ;

    printf("Total time in seoncds : %d",totol_seconds);

    return 0;
}