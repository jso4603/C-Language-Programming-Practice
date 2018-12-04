//
//  main.c
//  challenge 8.2-2
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char ary[30] = {};
    int i, cnt = 0;
    
    printf("문장 입력 : ");
    gets(ary); //띄어쓰기를 입력 받으려면 gets함수를 사용해야 하는데, 에러가 난다.
    //scanf("%s", ary);
    
    for(i=0;i<30;i++)
    {
        if(ary[i] >= 'A' && ary[i] <= 'Z')
        {
            ary[i] = ary[i] - ('A'-'a'); //'A'와 'a'의 차이만큼을 대문자에서 빼주면 소문자로 변한다.
            cnt++;
        }
    }
    
    printf("바뀐 문장 : %s\n", ary);
    printf("바뀐 문자 수 : %d\n", cnt);
    
    return 0;
}
