#include <iostream>
using namespace std;
int main() {
	/*
	Boolean16◦. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным»
	*/
	/*
	int a;
	bool res;
	cin >> a;
	res = (a > 9) ;
	res = (a % 2 == 0);
	res = (a < 100);
	cout << boolalpha << res << endl;
	*/
	/*
	Boolean17◦. Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным».
	*/
	/*
	int a;
	bool res;
	cin >> a;
	res = (a > 99);
	res = (a % 1 == 0);
	res = (a < 1000);
	cout << boolalpha << res << endl;
	*/
	/*
	Boolean21◦. Дано трехзначное число. Проверить истинность высказывания:«Цифры данного числа образуют возрастающую последовательность».
	*/
	int a, b;
	cin >> a >> b;
	int n = 0;
	for (int i = a; i <= b; i++; ) {
		cout << i << ' ';
		n++;
	}
	cout << endl;
	cout << n;
	return 0;
}