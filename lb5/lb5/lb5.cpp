﻿
#include <iostream>
using namespace std; //пространство имен std
int main()
{
    setlocale(LC_ALL, "ru");
    int c = 1; //переменная счета произведения
    int N[6]; //массив для записи произведений строк 
    int P[6][6]; //массив для вывода полученной матрицы
    int A[6][6];
    int B[6][6];
    cout << "Введите элементы первой матрицы: \n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) cin >> A[i][j];
    }

    cout << "Введите элементы второй матрицы: \n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) cin >> B[i][j];
    }
    cout << '\n';
    cout << "Суммы элементов - " << "\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            c = c + B[i][j];
        }
        cout << i << " - ой строки матрицы В : " << c << '\n';
        N[i] = c;
        c = 1;
    }
    cout << "Полученная матрица:";
    for (int i = 0; i < 6; i++) {
        cout << '\n';
        for (int j = 0; j < 6; j++) {
            P[i][j] = A[i][j] + N[j]; //добавляем к элементам столбцов первой матрицы произведение элементов соответствующей строки
            cout << P[i][j] << " ";
        }
    }
}
