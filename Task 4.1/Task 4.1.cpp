#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void menu();

int main()
{
    setlocale(LC_ALL, "Russian");

    menu();

    return 0;
}

void task_1()
{
    int start = 0, end = 500, sum = 0;
    cout << "Введите начальное значение: ";
    cin >> start;
    if (start > end) swap(start, end);
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    cout << "\nСумма чисел от " << start << " до " << end << " равна " << sum << "\n\n";
}

void task_2()
{
    double basis = 0, indicator = 0;
    long long result = 0;
    cout << "Введите основание степени: ";
    cin >> basis;
    cout << "Введите показатель степени: ";
    cin >> indicator;
    result = pow(basis, indicator);
    cout << basis << " ^ " << indicator << " = " << result << "\n\n";
}

void task_3()
{
    int average = 0;
    for (int i = 1; i <= 1000; i++)
    {
        average += i;
    }
    average /= 1000;
    cout << "Среднее арифметическое чисел от 1 до 1000 равно " << average << "\n\n";
}

void task_4()
{
    int start = 0, end = 20;
    long long product = 1;
    do
    {
        cout << "Введите начальное значение: ";
        cin >> start;
    } while (start < 1 or start > end);
    for (int i = start; i <= end; i++)
    {
        product *= i;
    }
    cout << "\nПроизведение чисел от " << start << " до " << end << " равно " << product << "\n\n";
}

void task_5()
{
    int number = 0;
    cout << "Введите число: ";
    cin >> number;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << "\n";
    }
    cout << endl;
}

void menu()
{
    int task = 0;
    void(*list_of_menu[5])() = { task_1, task_2, task_3, task_4, task_5 };
    do
    {
        do
        {
            cout << "Введите номер задания, 0 - выход: ";
            cin >> task;
        } while (task < 0 or task > 5);
        cout << "\n\n";
        if (task) list_of_menu[task - 1]();
    } while (task);
}