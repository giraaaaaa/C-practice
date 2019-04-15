#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];

    scanf("%s", &word);
    for(int i = 0; word[i] != '\0'; i++)
    {

        if(i%10 == 0 && i != 0){
           printf("\n");
        }
        printf("%c",word[i]);
        
    }
    printf("\0");
    return 0;
}
