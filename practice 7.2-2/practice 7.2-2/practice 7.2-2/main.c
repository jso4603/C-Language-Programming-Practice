//
//  main.c
//  practice 7.2-2
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int r1() {return 4;} //4를 반환하는 함수 정의
int r10() {return (30 + r1());} //r1함수가 반환하는 값에 30을 더해 반환
int r100() {return (200 + r10());} //r10함수가 변환하는 값에 200을 더해 반환

int main(void)
{
    printf("%d\n", r100());
    
    return 0;
}
