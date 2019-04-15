#include <stdio.h>


int main(int argc, char const *argv[])
{
    int topNi[4][8] = {0};
    int spin = 0;
    for(int i = 0; i < 4; i++)  // 2차원배열로 톱니바퀴를 구성함
    {
        int k = 0;
        for(int j = 0; i < 8; j++){
            scanf("%d", &k);
            topNi[i][j] = k;
        }
    }
    
    scanf("%d", &spin); //회전수를 입력

    int topNum = 0;
    int direction = 0;
    for(int t = 0; t < spin; t++)
    {
        scanf("%d", &topNum);
        scanf("&d", &direction);
    }
    

    return 0;
}





int topNees(){

}