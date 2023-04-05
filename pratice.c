#include<stdio.h>
int nAge(int n);
int nAge(int n) {
	int Age;
	if (n == 1)
		Age = 10; //终止条件
	else
		Age = nAge(n - 1) + 2; //递归调用
	return Age;
}
void main() {
	printf("第5个人的年龄是%d\n", nAge(5));
}
