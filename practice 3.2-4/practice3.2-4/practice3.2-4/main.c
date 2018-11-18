//
//  main.c
//  practice3.2-4
//
//  Created by 장상옥 on 2018. 11. 16..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int num;
    
    printf("학번 입력 :"); //입력 안내 메시지의 출력은 printf 함수로 따로 작성해야함.
    scanf(" %d", &num);
    printf("학번 : %d \n", num);
    
    return 0;
    
}
