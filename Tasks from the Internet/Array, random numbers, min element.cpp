#include <iostream>
#include <iomanip>
//#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    double a, b; // границы отрезка [a,b]
    cout << "¬ведите число а: ";
    cin >> a;
    cout << "¬ведите число в: ";
    cin >> b;

    double matrix[10][10]; // матрица случайных чисел

    // инициализаци€ двумерного массива случайными числами
    for (int counter_rows = 0; counter_rows < 10; counter_rows++)
        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
            matrix[counter_rows][counter_columns] = (double(rand()) / RAND_MAX) * (b - a) + a; // генераци€ случайных вещестчвенных чисел равномерно распределЄнных на отрезке [a,b]

    cout << "\n—генерированный массив вещественных чисел" << endl;
    // вывод сгенерированного массива
    for (int counter_rows = 0; counter_rows < 10; counter_rows++)
    {
        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
            cout << setw(7) << fixed << setprecision(3) << matrix[counter_rows][counter_columns];
        cout << endl;
    }

    double min = matrix[0][0]; // переменна€, дл€ хранени€ минимального значени€
    int nom; // пор€дковый номер строки с минимальным элеиентом

    // поиск минимального элемента в массиве
    for (int counter_rows = 0; counter_rows < 10; counter_rows++)
    {
        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
        {
            if (matrix[counter_rows][counter_columns] < min)
            {
                min = matrix[counter_rows][counter_columns]; // сохран€ем значение минимального элемента
                nom = counter_rows; // запоминаем номер строки
            }
        }
    }

    cout << "\nЌомер строки с минимальным элементом: " << (nom + 1) << endl;
    cout << "ћинимальный элемент: " << min << endl;
    // перестановка строк
    if (nom != 0) // если минимальный элемент не содержитс€ в первой строке
    {
        double temp[10]; // временный массив дл€ хранени€ первой строки
        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
            temp[counter_columns] = matrix[0][counter_columns]; // сохран€ем значени€ первой строки во временный массив

        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
            matrix[0][counter_columns] = matrix[nom][counter_columns]; // сохран€ем значени€ строки с минимальным элементом в перой строке двумерного масссива

        for (int counter_columns = 0; counter_columns < 10; counter_columns++)
            matrix[nom][counter_columns] = temp[counter_columns]; // перемещаем значени€ из временного массива на место строки с мин элементом

    // вывод массива с перестановленными строками
        cout << "\nћассив с перестановленными строками" << endl;
        for (int counter_rows = 0; counter_rows < 10; counter_rows++)
        {
            for (int counter_columns = 0; counter_columns < 10; counter_columns++)
                cout << setw(7) << fixed << setprecision(3) << matrix[counter_rows][counter_columns];
            cout << endl;
        }

    } // конец if

    return 0;
}