/*
1. ��͸� �̿��Ͽ� ���ڿ��� �Ųٷ� ����ϴ� �Լ��� �����.
2. �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �����.
*/

#include <iostream>
#define MAX_ARRAY_SIZE 10
using namespace std;

void reverse(char*);
char* change(char*);

int main() {
	char s1[MAX_ARRAY_SIZE] = "abcdEFgH";
	reverse(s1);

	char* s2 = change(s1);
	cout << "\n" << s2 << "\n";
	
	return 0;
}

//1.
void reverse(char* x) {
	if (*x == 0)
		return;
	else {
		reverse(x + 1);		//���
		cout << *x;
	}
}

//2.
char* change(char* x) {
	for (int i = 0; i < MAX_ARRAY_SIZE;i++) {
		if (x[i] >= 'a' && x[i] <= 'z') {
			x[i] = x[i] - 32;
		}
		else
			x[i] = x[i];
	}
	return x;
}