//passed by value vs. passed by reference
/*
passed by value: 함수를 호출할 때 매개변수 값을 복사하여 가져온다.
passed by reference: 함수를 호출할 때 복사 없이 변수의 주소 값을 가져온다.

차이: passed by value의 경우 매개변수의 값은 복사되어 사용되었기 때문에 원래의 값이 변하지 않지만,
	  passed by reference의 경우 변수의 주소를 넘겨주기 때문에 원래의 값이 변한다.
	  즉, passed by value로는 함수 내부의 변수 값을 수정할 수 없지만, paassed by reference로는
	  함수 내부에서 변수의 값을 수정할 수 있다.
*/

#include <iostream>
using namespace std;

int squareByValue(int);		//value pass
int squareByReference(int&);	//reference pass

//차이를 알아보기 위해 출력하는 함수를 만들었다.
int main() {
	int x = 2;
	int z = 4;

	cout << "x= " << x << "	before squareByValue function\n";
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x= " << x << "	after squareByValue\n\n";

	cout << "z= " << z << "	before squareByReference fuction\n";
	cout << "Value returned by squareByReference: " << squareByReference(z) << endl;
	cout << "z= " << z << "	after squareByReference\n";

	return 0;
}

//passed by value 이므로 main에서의 num값은 함수를 거쳐도 변하지 않아야 된다. (실행 결과 역시 변하지 않았다.)
int squareByValue(int num) {
	return num *= num;
}

//passed by Reference 이므로 main에서의 num값은 함수를 거치면 변해야 한다. (실행 결과 변수 값이 변했다.)
int squareByReference(int &num) {
	return num *= num;
}