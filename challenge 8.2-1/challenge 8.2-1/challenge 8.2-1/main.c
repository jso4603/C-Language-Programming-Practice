//
//  main.c
//  challenge 8.2-1
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int score[5], yuhyo[3];
    int i;
    int max = score[0];
    int min = 10; //score[0]으로 똑같이 초기화 하면 기능을 하지 않는다.
    int tot = 0;
    double avg;
    
    printf("5명 심사위원의 점수 입력 : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &score[i]);
        if(max<score[i]) max = score[i]; //비교하여 큰 수를 max에 대입
        if(min>score[i]) min = score[i]; //비교하여 작은 수를 min에 대입
    }
    
    printf("유효점수 :");
    for(i=0;i<5;i++)
    {
        if(score[i]!=max && score[i]!=min) //최고점과 최저점이 아니면 출력
        {
            printf("%3d ",score[i]);
            yuhyo[i] = score[i]; //출력 된 수를 유효숫자 배열에 대입
        }
    }
    printf("\n");
    /*
    for(i=0;i<5;i++)
    {
        printf("%d", yuhyo[i]);
    }
    printf("\n");
    */
    for(i=0;i<5;i++)
    {
        tot += yuhyo[i];
    }
    printf("총점 : %d\n", tot);
    avg = tot / 3.0;
    printf("평균 : %.1lf\n", avg);
}
