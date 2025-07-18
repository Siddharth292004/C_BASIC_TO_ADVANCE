// Generate a random number between 1 and 100.
// int r = (rand() % (max - min + 1)) + min;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    srand(time(NULL));
    int min = 1,max = 100;
    int random = (rand() % (max - min + 1) + min);
    printf("Random number between 1 and 100: %d",random);
    
    return 0;
}