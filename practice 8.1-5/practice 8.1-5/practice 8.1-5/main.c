//
//  main.c
//  practice 8.1-5
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h> //피보나치 수열 프로그램

int main(void)
{
    int ary[10] = {1,2}; //배열 선언과 초기화, 나머지 배열 요소는 0으로 초기화
    int i;
    
    for(i=2;i<10;i++) //나머지 8개의 배열 요소를 채우기 위해 8번 반복
    {
        ary[i] = ary[i-2] + ary[i-1]; //다음 배열 요소는 전 요소 + 전전 요소
    }
    
    for(i=0;i<10;i++) //배열 전체의 값을 출력한다.
    {
        printf("%4d", ary[i]);
    }
    printf("\n");
    return 0;
}
