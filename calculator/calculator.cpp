/*
c++에서의 연산자와 반복문 조건문을 이용하여 계산기를 만든다.
함수를 만들어서 c++의 기본적인 내용을 복습한다.
*/

/*
계산기
사칙연산과 계승을 계산하는 계산기를 만들어야 한다.
0 입력: 계산기 종료
1 입력: 사칙연산
2 입력: 하나의 수를 입력하여 계승이 얼마인지 출력한다.
*/

#include <iostream>
#include <math.h>
using namespace std;

void calculator(int a, int b, char c) {	//사칙연산
	cin >> a >> c >> b;
	int result;
	if (c == '+') {			//더하기
		result = a + b;
		cout << result;
	}
	else if (c == '-') {	//빼기
		result = a - b;
		cout << result;
	}
	else if (c == '*') {	//곱하기
		result = a * b;
		cout << result;
	}
	else if (c == '/') {	//나누기
		result = a / b;
		cout << result;
	}
	else					//사칙연산자 입력 오류
		cout << "error";
}

void factorial(int a) {		//계승 연산
	cin >> a;
	int b = 1;
	for (int i = 1; i <= a; ++i)	//연속적으로 1 증가
		b = b * i;
	cout << b;
}

int main() {
	int a = 0, b = 0;
	char c = ' ';
	cout << "계산기" << endl;
	cout << "0을 입력하면 종료" << endl;
	cout << "1을 입력하면 사칙연산" << endl;
	cout << "2을 입력하면 계승" << endl;
	int mode = -1;
	while (1) {
		cout << "\nMode ";
		cin >> mode;
		if (mode == 0)			//종료
			break;
		else if (mode == 1) {	//사칙연산
			cout << "input = ";
			calculator(a, b, c);
		}
		else if (mode == 2) {	//계승
			cout << "input = ";
			factorial(a);
		}
	}
}