//
//  main.c
//  challenge 7.2-1
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int total(int kor, int eng, int mat); //세 과목의 점수를 넘겨받아 총점 반환
double average(int tot); // 총점을 넘겨받아 평균 반환
void print_title(void); //점수를 제외한 나머지 부분 출력

int main(void)
{
    int kor ,eng , mat, tot;
    double avg;
    
    printf("세 과목의 점수 입력 : ");
    scanf("%d%d%d", &kor, &eng, &mat);
    
    tot = total(kor,eng,mat); //세 과목의 총합을 호출, 반환값은 tot에 저장
    avg = average(total(kor,eng,mat)); //세 과목의 평균을 호출, 반환값은 avg에 저장
    
    print_title(); //점수 제외한 나머지 부분 호출
    printf("    %3d  %3d  %3d  %3d  %.1lf\n",kor,eng,mat,tot,avg);
}

int total(int kor, int eng, int mat) //총합을 구해주는 함수 정의
{
    int tot;
    
    tot = kor + eng + mat;
    
    return tot;
}

double average(int tot) //평균을 구해주는 합수 정의
{
    double avg;
    
    avg = tot / 3.0;
    
    return avg;
}

void print_title(void) //점수를 제외한 나머지 부분을 출력해주는 함수 정의
{
    printf("        =====<성적표>=====\n\n");
    
    printf("----------------------------------\n");
    printf("    국어  영어  수학  총점  평균\n");
     printf("----------------------------------\n");
}
