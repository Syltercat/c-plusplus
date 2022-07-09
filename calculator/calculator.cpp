/*
c++������ �����ڿ� �ݺ��� ���ǹ��� �̿��Ͽ� ���⸦ �����.
�Լ��� ���� c++�� �⺻���� ������ �����Ѵ�.
*/

/*
����
��Ģ����� ����� ����ϴ� ���⸦ ������ �Ѵ�.
0 �Է�: ���� ����
1 �Է�: ��Ģ����
2 �Է�: �ϳ��� ���� �Է��Ͽ� ����� ������ ����Ѵ�.
*/

#include <iostream>
#include <math.h>
using namespace std;

void calculator(int a, int b, char c) {	//��Ģ����
	cin >> a >> c >> b;
	int result;
	if (c == '+') {			//���ϱ�
		result = a + b;
		cout << result;
	}
	else if (c == '-') {	//����
		result = a - b;
		cout << result;
	}
	else if (c == '*') {	//���ϱ�
		result = a * b;
		cout << result;
	}
	else if (c == '/') {	//������
		result = a / b;
		cout << result;
	}
	else					//��Ģ������ �Է� ����
		cout << "error";
}

void factorial(int a) {		//��� ����
	cin >> a;
	int b = 1;
	for (int i = 1; i <= a; ++i)	//���������� 1 ����
		b = b * i;
	cout << b;
}

int main() {
	int a = 0, b = 0;
	char c = ' ';
	cout << "����" << endl;
	cout << "0�� �Է��ϸ� ����" << endl;
	cout << "1�� �Է��ϸ� ��Ģ����" << endl;
	cout << "2�� �Է��ϸ� ���" << endl;
	int mode = -1;
	while (1) {
		cout << "\nMode ";
		cin >> mode;
		if (mode == 0)			//����
			break;
		else if (mode == 1) {	//��Ģ����
			cout << "input = ";
			calculator(a, b, c);
		}
		else if (mode == 2) {	//���
			cout << "input = ";
			factorial(a);
		}
	}
}