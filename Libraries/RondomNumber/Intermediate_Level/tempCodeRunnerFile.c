#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int toss = rand()%2;

    if(toss == 0){
        printf("Head\n");
    }
    else{
        printf("Tail\n");
    }

    return 0;

}