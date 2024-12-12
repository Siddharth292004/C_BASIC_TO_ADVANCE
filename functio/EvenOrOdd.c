// write a program to check number is even or odd.

#include<stdio.h>
int check(int num){
    if(num==0){
        printf("THIS NUMBER IS NOT A EVEN OR ODD ");
    }
    else if(num%2==0){
        printf("THE NUMBER IS EVEN");
    }
    else{
        printf("THIS NUMBER IS ODD");
    }
}
int main(){
    int num;
    printf("ENTER THE NUMBER ");
    scanf("%d",&num);
    check(num);

}