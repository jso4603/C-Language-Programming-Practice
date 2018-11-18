//
//  main.c
//  3-2
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a; //9행에서 대입연산 으로 초기화
    int b = 20; //변수 선언과 동시에 초기화
    int c; // 초기화 하지 않음
    
    a = 10; // a에 10을 대입하여 초기화
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    printf("c:%d\n", c); //경고 메시지가 뜨고 무시하고 실행하면 쓰레기값 출력
    
    return 0;
}
