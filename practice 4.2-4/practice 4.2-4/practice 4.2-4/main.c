//
//  main.c
//  practice 4.2-4
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int seats; //경기장의 좌석수
    int audience; //관중수
    double rate; //입장률을 저장할 변수
    
    printf("좌석 수를 입력하세요");
    scanf("%d", &seats);
    printf("관중 수를 입력하세요");
    scanf("%d", &audience);
    
    rate = (double) audience / (double) seats * 100.0;
    //'audience / seats' 를 바로 연산하면 둘 다 int형이므로 몫을 계산한다.
    //이 경우 관중수가 좌석 수보다 크지 않으므로 항상 0이 출력된다.
    //따라서 소수점까지 계산 할 수 있도록 double형으로 형변환한다.
    //나누기(/)와 곱하기(*)는 우선순위가 같으므로 연산 방향에 따라 왼쪽부터 나누기 연산이 먼저 수행된다.
    printf("입장률 : %.1lf %%\n", rate);
    
    return 0;
}

/* // 내가 쓴 답
#include <stdio.h>

int main(void)
{
    double seat = 70;
    double guest = 65;
    double percent = guest / seat * 100;
    
    printf("입장률 : %.1lf%%\n", percent); //%를 두번써야 %를 출력한다..
    
    return 0;
}
*/
