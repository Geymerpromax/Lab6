#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>

using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	char a[256], b[64];
	int i;

	cout << "Введите предложение 1: ";
	cin.getline (a, 256);
	cout << "Введите предложение 2: ";
	cin.getline(b, 64);

	cout << "Предложение 1: " << a << endl; 
	cout << "Предложение 2: " << b << endl;

	cout << "Размер 1: " << strlen(a) << endl; // длина строки

	strcat_s(a, 256, b);// a + b 
	cout << "Изм. a: " << a << endl;
	strcat_s(a, 256, "ggg");// a + "ggg" 
	cout << "Изм. a: " << a << endl;

	strcpy_s(a, 256, b);// присвоить a значение b 
	cout << "Изм. a: " << a << endl; 

	cout << strcmp(a, b);// от слова compare – сравнение

}