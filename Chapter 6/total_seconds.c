#include<stdio.h>

void total_seconds(int hours,int minutes,int seconds);
int main(){
    int hours,minutes,seconds;

    printf("Enter the hours: ");
    scanf("%d",&hours);
    printf("Enter the minutes: ");
    scanf("%d",&minutes);
    printf("Enter the seconds: ");
    scanf("%d",&seconds);

    total_seconds(hours,minutes,seconds);
    
}

void total_seconds(int hours,int minutes,int seconds){
    
    int total_seconds = (hours * 3600) + (minutes * 60) + seconds ;
    printf("Total seconds %d\n",total_seconds);
}