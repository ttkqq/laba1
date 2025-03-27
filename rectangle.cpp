#include <iostream>
#include <cmath>
#include <math.h>
#include <locale.h>

using namespace std;
using ushort_int = short int;

float area(ushort_int a, ushort_int b) {
    float ar = (a * b);
    return ar;
}


int check(ushort_int a, ushort_int b) {

    if ((a > 0) && (b > 0)) {
        return 1;
    }
    else {
        return 0;
    }
}


ushort_int perimeter(ushort_int a, ushort_int b) {
    ushort_int perim = ((2 * a) + (2 * b ));
    return perim;
}


float diagonal(ushort_int a, ushort_int b) {
    float diag = sqrt(pow(a,2) + pow(b,2));
    return diag;
}


int main() {
    setlocale(LC_ALL, "rus");
    cout << "то программа для счёта периметра, площади и длины диагонали прямоугольника" << endl;
    ushort_int a = 0;
    cout << "Введите сторону номер один: ";
    cin >> a;

    ushort_int b = 0;
    cout << "Введите строну номер два: ";
    cin >> b;


    if (check(a, b) == 1) {
        cout << "Периметр прямоугольника: " << perimeter(a, b) << endl;
        cout << "Площадь прямоугольника: " << area(a, b) << endl;
        cout << "Длина диагонали прямоугольника: " << diagonal(a, b) << endl;
    }
}
