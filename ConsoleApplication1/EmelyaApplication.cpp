#include <iostream>

/**
    @file		Emelin_Class_Patient.cpp
    @brief		Исходный файл программы
    @copyright	ВоГУ
    @author		Емелин Алексей Евгеньевич
    @date		18-12-23
    @version	12.22.21

*/

using namespace std;

/// Функция для ввода целого числа А
/** просит пользователя ввести число
\return вводимое число
*/
int EnterNumberA(int a)
{
    cout << "Enter A - ";
    cin >> a;
    cout << "A = " << a << "\n";
    return a;
}

/// Функция для ввода целого числа В
/** просит пользователя ввести число
\return вводимое число
*/
int EnterNumberB(int b)
{
    cout << "Enter B - ";
    cin >> b;
    cout << "B = " << b << "\n";
    return b;
}


/// Функция для рассчета остатка от деления
/** получает два числа и рассчитывает остаток от деления выводит на экран результат вычислений
*/
void OST(int a, int b)
{
    cout << a % b << endl;
}

/// Функция для реализаци деления
/** получает два числа и выполняет деление выводит на экран результат вычислений
*/
void DEL(int a, int b)
{
    cout << b / a << endl;
}

/// Функция вызывающая в процессе выполнения другие
/** Выводит на экран инструкцию и просит ввести число, а выводит результат выбора
\param N цифра для вызова функции
\param a число для рсчетов
\param b число для расчетов
*/
int main()
{
    cout << "Press 1 to enter A " << endl;
    cout << "Press 2 to enter B " << endl;
    cout << "Press 3 to have A%B " << endl;
    cout << "Press 4 to have B/A " << endl;
    cout << "Press 0 for end " << endl;
    int N, a = 0, b = 0;
    cin >> N;

    while (1)
    {
        switch (N)
        {
        case 1:
            a = EnterNumberA(a);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 2:
            b = EnterNumberB(b);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 3:
            OST(a, b);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 4:
            DEL(a, b);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        default:
            cout << "Programm is finished";
            return 0;
        }
    }
}

