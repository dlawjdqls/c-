// 20221123_lwb_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <stdio.h>

int find_max(int c, int d, int e);
int find_min(int f, int g, int h);

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0, min = 0;
    scanf("%d %d %d", &a, &b, &c);

    max = (a > max) ? a : max;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    max = (a > max) ? a : min;
    max = (b > max) ? b : min;
    max = (c > max) ? c : min;

    printf("max : %d min : %d\n",max, min);
    
    return 0;
}




int find_max(int c, int d, int e)
{
    int max = 0;
    /*
    max = (a > max) ? a : max;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    max = (a < min) ? a : min;
    max = (b < min) ? b : min;
    max = (c < min) ? c : min;
    */

    return max;
}

int find_min(int f, int g, int h)
{
    int min = 0;
    
    min = (f < min) ? f : min;
    min = (g < min) ? g : min;
    min = (h < min) ? h : min;
    
    return min;
}

int find_median(int i, int j, int k) // 중앙값 찾기
{
    int max = find_max(i, j, k);
    int min = find_min(i, j, k);
    int median = 0;
    if( (i !=max) &&(i!=min))
    return median;
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
