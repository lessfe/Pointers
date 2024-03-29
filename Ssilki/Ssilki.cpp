﻿#include <iostream>
using namespace std;

void main()
{
    int a = 5;

    int *pa = &a;

    int &aRef = a;

    cout << "*pa\t" << pa << endl;
    cout << "&aRef\t" << aRef << endl;
    
    // В ссылках не работает арифметика ссылок, как в арифметике указателей.
    // Т.е., если в арифметике указателей мы могли бы сделать следующее:
    // ----------------------------------
    // pa++;
    // cout << "*pa\t" << pa << endl;
    // ----------------------------------
    // то мы бы получали адрес ячейки данных со сдвигом ячейки на 1 байт.
    // но в ссылках арифметика не работает!!!.
    // И, если мы сделаем следующее:
    // ----------------------------------
    // aRef++ 
    // cout << "&aRef\t" << aRef << endl;
    // ----------------------------------
    // то мы получим значение aRef + единица, т.е. 6.
    // в ссылках мы работаем с данными на прямую.
    // 
    // Если присвоить aRef новое значение, например, 55.
    // И вывести значение a, т.е.:
    // ----------------------------------
    // aref = 55;
    // cout << a;
    // ----------------------------------
    // то в а мы уже получим новое значение.
    // также мы не может объявить ссылку, не инициализироваф ее.
    // int &aRef; работать не будет. Но это не относится к ссылкам, которые выступают в кач-ве параметра функции.
}

