//С клавиатуры ввести строку. Подсчитать в ней количество символов и каждый пятый символ заменить на «#»
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <stdlib.h>
using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	char a[256];
	int i;
	cout << "Введите предложение: ";
	cin.getline (a, 256, '*');
	cout << "Предложение: " << a << endl;
	cout << strlen(a); // длина строки
}