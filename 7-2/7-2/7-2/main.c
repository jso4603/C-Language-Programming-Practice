//
//  main.c
//  7-2
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int get_pos(void); //함수 선언

int main(void)
{
    int res;
    
    res = get_pos(); //함수 호출, 반환값은 res에 저장
    printf("반환값 : %d\n",res); //반환값 출력
    return 0;
}

int get_pos(void) //매개변수가 없고 반환형만 있다.
{
    int pos; //키보드 입력값을 저장 할 변수
    
    printf("양수 입력 : "); //입력 안내 메세지
    scanf("%d", &pos); //키보드 입력
    while(pos<0) // 음수가 입력되면 입력 과정 반복
    {
        printf("음수가 입력되었습니다! \n");
        printf("양수 입력 : ");
        scanf("%d", &pos);
    }
    
    return pos; //입력한 값 반환
}
