//
//  main.c
//  2-3
//
//  Created by 장상옥 on 2018. 11. 16..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    printf("12345678901234567890\n");   //화면에 칸 번호 출력
    printf("Be happy\n");   //"Be happy"를 출력하고 줄을 바꿈
    printf("My    friend\n"); //"My"를 출력하고 탭 위치로 이동 후에 "friend" 출력
    printf("Goot\bd\tchance\n");    //t를 d로 바꾸고 탭 위치로 이동 후에 "chance" 출력
    printf("Cow\rW\a\n");   //C를 W로 바꾸고 벨 소리를 낸다.
    
    return 0;
}
