#include <iostream> // подключаем библиотеку, необходимой для ввода-вывода на консоль 
#include <math.h> // подключаем библиотеку, необходимой для выполнения простых математических фукнций 
#include <cmath> // подключаем библиотеку, необходимую для округления значений
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian"); // русский текст в консоли

    double k, n1, n2, n3, N, s1, s2, s3, S, p1, p2, p3, P, SUM, w1, w2, w3, W; // перменные

    cout << " Введите количество критериев: ";
    cin >> k;

    cout << " Удобство1 в сравнении с удобством2: ";
    cin >> n1;
    cout << " Удобство1 в сравнении с ценой2: ";
    cin >> n2;
    cout << " Удобство1 в сравнении с качеством2: ";
    cin >> n3;
    cout << " Цена1 в сравнении с удобством2: ";
    cin >> s1;
    cout << " Цена1 в сравнении с ценой2: ";
    cin >> s2;
    cout << " Цена1 в сравнении с качеством2: ";
    cin >> s3;
    cout << " Качество1 в сравнении с удобством2: ";
    cin >> p1;
    cout << " Качество1 в сравнении с ценой2: ";
    cin >> p2;
    cout << " Качество1 в сравнении с качеством2: ";
    cin >> p3;

    cout << " Сумма по первой строке - Удобство1: " << endl;
    N = n1 + n2 + n3;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << N << endl;
    cout << " Сумма по второй строке - Цена1:" << endl;
    S = s1 + s2 + s3;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << S << endl;
    cout << " Сумма по третьей строке - Качество1:" << endl;
    P = p1 + p2 + p3;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << P << endl;
    cout << " Сумма всех трёх строк - Удобство1, Цена1, Качество1:" << endl;
    SUM = N + S + P;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << SUM << endl;
    cout << "Весовой коэффициент для первой строки - Удобство1:" << endl;
    w1 = N / SUM;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << w1 << endl;
    cout << "Весовой коэффициент для второй строки - Цена1:" << endl;
    w2 = S / SUM;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << w2 << endl;
    cout << "Весовой коэффициент для третьей строки - Качество1:" << endl;
    w3 = P / SUM;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << w3 << endl;
    cout << "Сумма весовых коэффициентов для трёх строк - Удобство1, Цена1, Качество1:" << endl;
    W = w1 + w2 + w3;
    // функция, определяющая количество знаков после запятой, в нашем случае - 2 знака после запятой
    cout.precision(2);
    cout << fixed << W;
    return 0;
}


