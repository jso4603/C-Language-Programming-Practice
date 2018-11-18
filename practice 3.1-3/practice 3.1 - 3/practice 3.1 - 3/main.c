//
//  main.c
//  practice 3.1 - 3
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int kor =70, int eng = 80, int mat = 90; //세 과목의 변수 선언과 초기화(실행이 안됨..)
    int tot; // 총점을 저장할 변수 선언
    
    tot = kor + eng + mat; //세 변수의 값을 더해 총점 변수에 저장
    printf("국어 : %d, 영어 : %d, 수학 %d\n", kor, eng, mat); //점수 출력
    printf("총점 :%d\n", tot); //총점 출력
    
    return 0;
}

/* 내 답
#include<stdio.h>

int main(void)
{
 
 int a = 70;
 int b = 80;
 int c = 90;
    
 int total = a + b + c;
    
    printf("국어 : %d, 영어 : %d, 수학 : %d \n", a, b, c);
    printf("총점 : %d \n" , total);
}
*/
