#include<stdio.h>
int nAge(int n);
int nAge(int n) {
	int Age;
	if (n == 1)
		Age = 10; //��ֹ����
	else
		Age = nAge(n - 1) + 2; //�ݹ����
	return Age;
}
void main() {
	printf("��5���˵�������%d\n", nAge(5));
}
