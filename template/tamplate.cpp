/*
Template을 이용하여 함수를 완성하라
-Swapdata는 값을 서로 바꿔주는 역할을 한다.
-직각 삼각형의 두 변이 주어졌을 때 나머지 변을 구하는 공식을 함수로 구현한다.
*/

#include <iostream>
#include <cmath>		//제곱과 루트를 위한 헤더
using namespace std;

//swap
template <class T> // 자료형과 관련없이 같은 기능을 하는 함수를 사용하고 싶을 때 template을 쓴다.
T swapdata(T val1, T val2) {
	cout << "value 1: " << val1 << ", value 2: " << val2 << endl;
	T swap;

	//자리 바꾸기
	swap = val1;
	val1 = val2;
	val2 = swap;

	cout << "After value1: " << val1 << ", value 2: " << val2 << endl;
	return 0;
}

//distance
template <class T>
T distance(T val1, T val2) {
	cout << "value 1: " << val1 << ", value 2: " << val2 << endl;
	T C, result;
	C = pow(val1, 2) + pow(val2, 2);	//높이와 밑변의 제곱을 합한 값
	result = sqrt(C);
	cout << "distance: " << result << endl;
	return 0;
}

//error
template <>		//template의 char 타입에 대한 특수화, 문자형 type이 입력될 경우 계산할 수 없다는 문구를 출력
				//(따로 특정 data type을 지정하여 다른 함수를 실행시킬 수 있다.)
char distance(char val1, char val2) {
	cout << "value 1: " << val1 << ", value 2: " << val2 << endl;
	cout << "문자는 계산할 수 없습니다.\n" << endl;
	return 0;
}

int main() {
	int a = 3, b = 4;
	char c = 'a', d = 'A';
	swapdata(a, b);
	swapdata(c, d);
	distance(a, b);
	distance(c, d);
	return 0;
}