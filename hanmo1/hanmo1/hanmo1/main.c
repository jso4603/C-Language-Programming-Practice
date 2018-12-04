//
//  main.c
//  hanmo1
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char a[20], b[20], c[20];
    int kor_a, kor_b, kor_c, mat_a, mat_b, mat_c, avg_a, avg_b, avg_c;
    
    printf("학생 3명의 이름을 입력해주세요.");
    scanf("%s%s%s",a, b, c);
    printf("순서대로 국어점수를 입력해주세요.");
    scanf("%d%d%d",&kor_a,&kor_b,&kor_c);
    printf("순서대로 수학점수를 입력해주세요.");
    scanf("%d%d%d",&mat_a,&mat_b,&mat_c);
    
    avg_a = (kor_a + mat_a) / 2;
    avg_b = (kor_b + mat_b) / 2;
    avg_c = (kor_c + mat_c) / 2;

    
    if((avg_a>avg_b) && (avg_a>avg_c))
    {
        printf("평균점수가 제일 높은 학생은 %s 입니다.\n", a);
    }
    else if((avg_b>avg_a) && (avg_b>avg_c))
    {
        printf("평균점수가 제일 높은 학생은 %s 입니다.\n", b);
    }
    else if((avg_c>avg_a) && (avg_c>avg_b))
    {
        printf("평균점수가 제일 높은 학생은 %s 입니다.\n", c);
    }
    
    return 0;
}
