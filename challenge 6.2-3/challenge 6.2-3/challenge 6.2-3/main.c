//
//  main.c
//  challenge 6.2-3
//
//  Created by 장상옥 on 2018. 12. 2..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int year, month, totalday, i;
    int dayofweek;
    int dayformonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int loop = 1;
    while(loop)
    {
    printf(">년, 월을 입력하세요(종료는 0) : ");
    scanf("%d",&year);
        if (year == 0) {
            loop = 0;
            break;
        }
    scanf("%d",&month);
   
    totalday = ((year-1)*365) + ((year-1)/4) - ((year-1)/100) + ((year-1)/400);
    //전년도를 365일로 곱한 다음 윤년인 날을 더해준다.
    
    //if( !(year%4) && (year%100) || !(year%400))
    if(((year%4) && !(year%100)) || (year%400))
        dayformonth[1] = 29;
    
    for(i=0;i<month-1;i++)
    {
        totalday += dayformonth[i]; //배열까지 학습하지 않았기 때문에, switch~case구문을 이용해서 바꾸고 싶다.
        
    } //전년도 12월 말일까지 더한 총 일수 + 입력한 월-1월의 말일까지 더한 값
    
    totalday += 1; // 입력한 월의 1일
    
    dayofweek = totalday % 7;
    
    printf("\n          %d년 %d월\n",year,month);
    printf("        =============\n");
    printf("-----------------------------\n");
    printf(" SUN MON TUE WED THU FRI SAT\n");
    printf("-----------------------------\n");
    
    for(i=0;i<dayofweek;i++)
        printf("    ");
    for(i=1;i<=dayformonth[month-1];i++)
    {
        printf("%4d", i);
        if(!((i+dayofweek)%7))
            printf("\n");
    }
    printf("\n\n");
    }
    return 0;
}
