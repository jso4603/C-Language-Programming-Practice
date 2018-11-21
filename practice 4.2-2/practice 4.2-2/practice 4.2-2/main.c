//
//  main.c
//  practice 4.2-2
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int A;
    
    printf("숫자를 입력하시오.\n");
    scanf("%d", &A);
    printf("%s\n", (A>=0) ? "양수입니다." : "음수입니다.");
    //첫 번쨰 피연산자인 조건식 (A>=0)을 수행하여 A가 0보다 크거나 같으면
    //두 번째 피연사자인 "양수입니다가 결과값이 되어 출력되며
    //A가 0보다 작으면 "음수입니다"가 결과값이 되어 출력된다.
    return 0;
    
}
