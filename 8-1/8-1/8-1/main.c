//
//  main.c
//  8-1
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int ary[5]; //int형 요소 5개의 배열 선언
    
    ary[0] = 10; //첫 번째 배열 요소에 10 대입
    ary[1] = 20; //두 번째 배열 요소에 20 대입
    ary[2] = ary[0] + ary[1]; //첫 번째와 두 번째 요소를 더해 세 번째 저장
    scanf("%d", &ary[3]); //키보드로 네 번째 요소에 입력
    
    printf("%d\n", ary[2]); //세 번째 배열 요소 출력
    printf("%d\n", ary[2]);
    printf("%d\n", ary[2]); //마지막 배열 요소는 쓰레기값
    
    return 0;
}
