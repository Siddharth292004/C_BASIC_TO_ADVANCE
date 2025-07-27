#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void){
    time_t now = time(NULL);
     // number of secs since jan.1,1970 midnight
    printf("%ld\n",now);
    sleep(2);

    time_t two_sec = time(NULL);
    printf("%ld\n",two_sec);

    double diff = difftime(two_sec,now);
    printf("diff: %f\n",diff);
    return 0;

}