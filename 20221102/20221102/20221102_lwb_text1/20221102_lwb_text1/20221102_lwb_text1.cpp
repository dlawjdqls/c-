// 20221102_lwb_text1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int Add(int num1, int num2);  //선언
int Sub(int num1, int num2);  //선언
int Multi(int num1, int num2);  //선언
double Div(int num1, int num2); //선언
void HowtoUseThisProgram(void); //선언
int ReadNum(void)

void NoReturnType(int num)
{
	if (num < 0)
		return; 
	
}


int main()
{
	int data = 0;
	int num1 = 10, num2 = 5;
	data = printf("test\n");
	printf("%d\n", data);
	printf("%d\n", Add(num1, num2));
	printf("%d\n", Sub(num1, num2));
	printf("%d\n", Multi(num1, num2));
	printf("%lf\n", Div(num1, num2));

	printf("%d\n", ReadNum());
	HowtoUseThisProgram();
	return 0;
}


int Add(int num1, int num2)
{
	int result = num1 + num2;

	return result;
}
int Sub(int num1, int num2)
{
	int result = num1 - num2;
	return result;
}
int Multi(int num1, int num2)
{
	int result = num1 * num2;
	return result;
}

double Div(int num1, int num2) //선언
{
	double result = (double)num1 / (double)num2;
	return result;
}

void ShowAddResult(int num)   // 인자전달 (0), 반환 값 (x)
{
	printf("덧셈결과 출력: %d |n", num);
}

int ReadNum(void)  // 인자전달 (x), 반환 값 (o)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisprog(void)   // 인자전달 (x), 반환 값 (x)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. |n");
	printf("자! 그럼 두 개의 정수를 입력하세요. |n");
}

void NoReturnType(int num)
{
	if (num < 0) return;
	else printf("양수입니다");
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
