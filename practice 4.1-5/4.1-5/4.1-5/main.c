//
//  main.c
//  4.1-5
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void) //연습문제 scanf 활용하여 입력하는 프로그램으로 바꿔보았다.
{
    int dodo, gogo, mymoney, rest, change;
    int w1000, w500, w100, w50, w10;
    
    printf("안녕하세요 슈퍼마켓입니다.\n");
    printf("구입하실 또또면과 꽁꽁바 갯수를 입력하세요 \n");
    scanf("%d%d", &dodo,&gogo);
    
    
    int total = (dodo*70) + (gogo*30);
    
    printf("또또면 %d개와 꽁꽁바 %d개 해서 %d원 입니다.\n",dodo, gogo, total);
    printf("지불하실 금액을 입력하세요\n");
    scanf("%d",&mymoney);
    
    change = mymoney - total;
    w1000 = change / 1000;
    rest = change % 1000;
    w500 = rest / 500;
    rest = rest % 500;
    w100 = rest / 100;
    rest = rest % 100;
    w50 = rest / 50;
    rest = rest % 50;
    w10 = rest / 10;
    
    printf("%d원 받았습니다. 거스름돈은 %d원 입니다.\n",mymoney, change);
    printf("거스름돈 동전의 최소 개수...\n");
    printf("1000원:%d개, 500원:%d개, 100원:%d개, 50원:%d개, 10원:%d개\n",w1000,w500,w100,w50,w10);
    
    return 0;
}
/*
#include<stdio.h>

int main(void)
{
    int dodo, gogo; //또또면과 꽁꽁바의 구입금액 저장
    int total, change, rest; //총 구입금액과 잔돈, 임시 변수 선언
    int w500, w100, w50, w10; //각 금액단위 동전의 개수를 저장할 변수
    
    dodo = 70 * 2; //또또면 구입가격 계산, 또또면 70원짜리 2개
    gogo = 30 * 3; //꽁꽁바 구입가격 계산, 꽁꽁바 30원짜리 3개
    total = dodo + gogo; //전체 구입 총액 계산
    change = 1000 - total; //거스름돈 계산
    
    w500 = change / 500; //몫 연산자를 사용하여 500원 동전의 개수 계산
    rest = change % 500; //500원을 거슬러주고 남은 잔돈을 임시 보관
    w100 = rest / 100; //남은 잔돈에서 100원 동전의 개수 계산
    rest = rest % 100; //100원을 거슬러주고 남은 잔돈을 임시 보관
    w50 = rest / 50;
    rest = rest % 50;
    w10 = rest /10;
    
    printf("whole dodo price : %dwon\n", dodo);
    printf("whole gogo price : %dwon\n", gogo);
    printf("change : %dwon\n", change);
    printf("sort of change...\n");
    printf("500won:%d, 100won:%d, 50won:%d, 10won:%d\n",w500,w100,w50,w10);
    
    return 0;
}
*/

/* //내가 쓴 답
#include<stdio.h>

int main(void)
{
    int noodle = 2, icecream = 3, mymoney = 1000;
    int noodle_cost = 70, icecream_cost = 30;
    int sum_cost, change;
    int fivehundred, hundred, fifty, ten; //맨 앞글자만 알파벳을 쓰면 뒤에는 숫자 사용 가능
    
    sum_cost = (noodle*noodle_cost) + (icecream*icecream_cost);
    change = mymoney - sum_cost;
    fivehundred = change / 500; //%를 사용했으면 더 간단하게 해결되었을듯..
    hundred = (change - 500*fivehundred) / 100;
    fifty = (change - 500*fivehundred - 100*hundred) / 50;
    ten = (change - 500*fivehundred - 100*hundred - 50*fifty) / 10;
    
    printf("whole noodle price : %dwon\n", noodle*noodle_cost);
    printf("whole icecream price : %dwon\n", icecream*icecream_cost);
    printf("change : %dwon\n", change);
    printf("sort of change...\n");
    printf("500won : %d 100won : %d 50won : %d 10won : %d\n",fivehundred,hundred,fifty,ten);
    
    
    return 0;
    
}
 */

