﻿#include <iostream>
#include <math.h> // подключаем библиотеки, необходимой для выполнения простых математических фукнций 
#include <cmath>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian"); // русский текст в консоли

    double k, n1, n2, n3, N, s1, s2, s3, S, p1, p2, p3, P, SUM, w1, w2, w3, W;

    cout << " Введите количество критериев: ";
    cin >> k;

    cout << " Удобство1 в сравнении с удобством2:";
    cin >> n1;
    cout << " Удобство1 в сравнении с ценой2:";
    cin >> n2;
    cout << " Удобство1 в сравнении с качеством2:";
    cin >> n3;
    cout << " Цена1 в сравнении с удобством2:";
    cin >> s1;
    cout << " Цена1 в сравнении с ценой2:";
    cin >> s2;
    cout << " Цена1 в сравнении с качеством2:";
    cin >> s3;
    cout << " Качество1 в сравнении с удобством2:";
    cin >> p1;
    cout << " Качество1 в сравнении с ценой2:";
    cin >> p2;
    cout << " Качество1 в сравнении с качеством2:";
    cin >> p3;

    N = n1 + n2 + n3;
    cout.precision(2);
    cout << fixed << N << endl;
    S = s1 + s2 + s3;
    cout.precision(2);
    cout << fixed << S << endl;
    P = p1 + p2 + p3;
    cout.precision(2);
    cout << fixed << P << endl;
    SUM = N + S + P;
    cout.precision(2);
    cout << fixed << SUM << endl;
    w1 = N / SUM;
    cout.precision(2);
    cout << fixed << w1 << endl;
    w2 = S / SUM;
    cout.precision(2);
    cout << fixed << w2 << endl;
    w3 = P / SUM;
    cout.precision(2);
    cout << fixed << w3 << endl;
    W = w1 + w2 + w3;
    cout.precision(2);
    cout << fixed << W;
    return 0;
}

