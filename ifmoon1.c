#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int score = 0;
    scanf("%d", &score);

    if(score >= 90){
        printf("A");
    }
    else if(score >= 80 && 90 > score){
         printf("B");
    }
    else if(score >= 70 && 80 > score){
         printf("C");

    }
    else if(score >= 60 && 70 > score){
         printf("D");
        
    }
    else{
         printf("F");

    }
    return 0;
}
