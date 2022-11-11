//getchar
//putchar
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include <cstring>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char a[80], c[3], d[] = "под", b[20][20];
    int i, j, str, stb, k = 0;
    cout << "Введите предложение:" << endl;
    cin >> a;
    cout << a;
    for (i = 0, str = stb = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ')
        {
            b[str][stb] = a[i]; stb++;
        }
        else
        {
            b[str][stb] = '\0';
            str++; 
            stb = 0;
        }
    }
    b[str][stb] = '\0';
    cout << "Строковый массив" << endl;
    for (i = 0; i <= str; i++)
    {
        puts(b[i]);
    }
    //getch();
    /*for (i = 0; i <= str; i++)
    {
        strncpy(c, b[i], 3);
        c[3] = '\0';
        if (strcmp(c, d) == 0)
        {
            k++;
        }
    }
    cout << k << endl;*/
    //getch();
}



