#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	printf("%d %d %1f\n", a / b, a%b, (double)a / b);
	return 0;
}

