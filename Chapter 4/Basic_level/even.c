// Print even numbers between 1 to 50 using while

#include<stdio.h>

int main(){
    int i = 1;
    while(i <=50){
        if(i %2 ==0){
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}