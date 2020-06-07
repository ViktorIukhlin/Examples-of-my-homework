#include <iostream>
#include <string.h>

using namespace std;

struct Data  
{
    int year;
    char name[10];
};

int main()
{
    setlocale(LC_ALL, "rus");

    Data* p = new Data[1]; 

    int var = 1;  
    int size = 1; 

    while (var)
    {
        if (size == 1) 
        {
            cout << "Имя: ";
            cin >> p[size - 1].name;
            cout << "Возраст: ";
            cin >> p[size - 1].year;
            cout << "Элементы структуры объекта Р:  " << p[size - 1].name << "  " << p[size - 1].year << ";\n";
        }
        else//size > 1
        {
            Data* copy = new Data[size - 1]; 

            for (int i = 0; i < size - 1; i++) 
            {
                strcpy(copy[i].name, p[i].name);
                copy[i].year = p[i].year;
            }

            delete[] p;  

            p = new Data[size]; 

            for (int i = 0; i < size - 1; i++)  
            {
                strcpy(p[i].name, copy[i].name);
                p[i].year = copy[i].year;
            }

            delete[] copy;  

            cout << "Имя: "; 
            cin >> p[size - 1].name;
            cout << "Возраст: ";
            cin >> p[size - 1].year;

            for (int i = 0; i < size; i++) 
            {
                cout << i << "-е элементы структуры объекта Р:  " << p[i].name << "  " << p[i].year << ";\n";
            }
        }

        size++; 

        cout << "\nВнести еще данные - 1, выход - 0: ";
        cin >> var;
        while (var != 0 && var != 1) 
        {
            cout << "Ошибка ввода!\n";
            cout << "\nВнести еще данные - 1, выход - 0: ";
            cin >> var;
        }
    }

    delete[] p;   
    return 0;
}