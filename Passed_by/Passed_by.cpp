//passed by value vs. passed by reference
/*
passed by value: �Լ��� ȣ���� �� �Ű����� ���� �����Ͽ� �����´�.
passed by reference: �Լ��� ȣ���� �� ���� ���� ������ �ּ� ���� �����´�.

����: passed by value�� ��� �Ű������� ���� ����Ǿ� ���Ǿ��� ������ ������ ���� ������ ������,
	  passed by reference�� ��� ������ �ּҸ� �Ѱ��ֱ� ������ ������ ���� ���Ѵ�.
	  ��, passed by value�δ� �Լ� ������ ���� ���� ������ �� ������, paassed by reference�δ�
	  �Լ� ���ο��� ������ ���� ������ �� �ִ�.
*/

#include <iostream>
using namespace std;

int squareByValue(int);		//value pass
int squareByReference(int&);	//reference pass

//���̸� �˾ƺ��� ���� ����ϴ� �Լ��� �������.
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

//passed by value �̹Ƿ� main������ num���� �Լ��� ���ĵ� ������ �ʾƾ� �ȴ�. (���� ��� ���� ������ �ʾҴ�.)
int squareByValue(int num) {
	return num *= num;
}

//passed by Reference �̹Ƿ� main������ num���� �Լ��� ��ġ�� ���ؾ� �Ѵ�. (���� ��� ���� ���� ���ߴ�.)
int squareByReference(int &num) {
	return num *= num;
}