/*
Template�� �̿��Ͽ� �Լ��� �ϼ��϶�
-Swapdata�� ���� ���� �ٲ��ִ� ������ �Ѵ�.
-���� �ﰢ���� �� ���� �־����� �� ������ ���� ���ϴ� ������ �Լ��� �����Ѵ�.
*/

#include <iostream>
#include <cmath>		//������ ��Ʈ�� ���� ���
using namespace std;

//swap
template <class T> // �ڷ����� ���þ��� ���� ����� �ϴ� �Լ��� ����ϰ� ���� �� template�� ����.
T swapdata(T val1, T val2) {
	cout << "value 1: " << val1 << ", value 2: " << val2 << endl;
	T swap;

	//�ڸ� �ٲٱ�
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
	C = pow(val1, 2) + pow(val2, 2);	//���̿� �غ��� ������ ���� ��
	result = sqrt(C);
	cout << "distance: " << result << endl;
	return 0;
}

//error
template <>		//template�� char Ÿ�Կ� ���� Ư��ȭ, ������ type�� �Էµ� ��� ����� �� ���ٴ� ������ ���
				//(���� Ư�� data type�� �����Ͽ� �ٸ� �Լ��� �����ų �� �ִ�.)
char distance(char val1, char val2) {
	cout << "value 1: " << val1 << ", value 2: " << val2 << endl;
	cout << "���ڴ� ����� �� �����ϴ�.\n" << endl;
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