//С клавиатуры ввести строку. Подсчитать в ней количество символов и каждый пятый символ заменить на «#»
#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string a;
	int i;
	cout << "Введите предложение: " << endl;
	cin >> a;
	cout << "Количество символов: " << a.length() << endl;
	for (i = 4; a.length() > i; i += 5)
	{
		a.insert(i, "#");
	}
	cout << "Изменённое предложение: " << a << endl;
}