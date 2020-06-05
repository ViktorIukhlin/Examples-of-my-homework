#include <iostream>
#include <cstring>

using namespace std;

char menu();
void operation1(char*);
void operation2(char*);
void operation3(char*);
void operation4(char*);
void operation5(char*);

int main() {
    setlocale(0, "");
    cout << "Введите строку nn";
    char string[255];
    memset(string, 0, sizeof(string));
    cin.getline(string, 255);
    char operation;
    operation = menu();

    while (operation != 'f') {
        if (operation != '1' & operation != '2' & operation != '3' & operation != '4' & operation != '5') {
            cout << "Введеный символ не соответствует условию. nПовторите попытку nn";
        }
        else {
            if (operation == '1')
                operation1(string);
            if (operation == '2')
                operation2(string);
            if (operation == '3')
                operation3(string);
            if (operation == '4')
                operation4(string);
            if (operation == '5')
                operation5(string);
        }
        operation = menu();
    }
    //system("pause");
}

char menu() {
    char operation;
    cout << "Для преобразования строки в заглавные буквы нажмите : 1" << endl;
    cout << "Для преобразования строки в нижний регистр нфжмите : 2" << endl;
    cout << "Для преобразования строки с Заглавной Буквы нажмите : 3" << endl;
    cout << "Для преобразования строки в первый символ в нижнем регистре нажмите : 4" << endl;
    cout << "Для преобразования строки как в обычном предложении нажмите : 5" << endl;
    cout << "Для выхода нажмите : f" << endl;
    cout << endl;
    cout << "Введите необходимое действие : ";
    cin >> operation;
    cout << "nn";
    return operation;
}

void operation1(char* p) {
    while (*p != '') {
        *p = (char)toupper(*p);
        cout << *p;
        p++;
    }
    cout << endl;
}

void operation2(char* p) {
    while (*p != '') {
        *p = (char)tolower(*p);
        cout << *p;
        p++;
    }
    cout << endl;
}

void operation3(char* p) {
    *p = (char)toupper(*p);
    while (*p != '') {
        if (!isspace(*p)) {
            cout << *p;
            p++;
            *p = (char)tolower(*p);
        }
        else {
            cout << *p;
            p++;
            *p = (char)toupper(*p);
        }
    }
    cout << endl;
}

void operation4(char* p) {
    *p = (char)tolower(*p);
    while (*p != '') {
        if (!isspace(*p)) {
            cout << *p;
            p++;
            *p = (char)toupper(*p);
        }
        else {
            cout << *p;
            p++;
            *p = (char)tolower(*p);
        }
    }
    cout << endl;
}

void operation5(char* p) {
    *p = (char)toupper(*p);
    cout << *p;
    p++;
    while (*p != '') {
        if (*p != '.') {
            *p = (char)tolower(*p);
            cout << *p;
            p++;
        }
        else {
            cout << *p;
            p++;
            cout << *p;
            p++;
            *p = (char)toupper(*p);
            cout << *p;
            p++;
        }
    }
    cout << endl;
}