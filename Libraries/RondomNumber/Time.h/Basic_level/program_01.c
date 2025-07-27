#include<stdio.h>
#include<time.h>

int main(void){
    time_t now = time(NULL);
     // number of secs since jan.1,1970 midnight
    printf("%ld\n",now);
}