#include <iostream>
#include <cmath>

using namespace std;
using ushort_int = unsigned short int;

int check(ushort_int a, ushort_int b, ushort_int c) {
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        return 1;
    } else {
        return 0;
    }          
}

float perim(ushort_int a, ushort_int b, ushort_int c) {
    return (a + b + c);
}

float semiperim(ushort_int a, ushort_int b, ushort_int c) {
    return (a + b + c) / 2.0;
}

float areaGeron(ushort_int a, ushort_int b, ushort_int c) {
    float p = semiperim(a, b, c);
    return pow((p * (p - a) * (p - b) * (p - c)),1.0/2.0);
}

int isosceles(ushort_int a, ushort_int b, ushort_int c) {
    return (a == b || a == c || b == c);
}

int main() {
    cout << "Это программа для счёта периметра, площади и проверки на равнобедренность" << endl;    
    ushort_int a, b, c;
    
    cout << "Введите 1 сторону треугольника: "; 
    cin >> a;
    cout << "Введите 2 сторону треугольника: "; 
    cin >> b;
    cout << "Введите 3 сторону треугольника: "; 
    cin >> c;
    
    if (check(a, b, c) == 1) {
        cout << "Периметр треугольника: " << perim(a, b, c) << endl;
        cout << "Площадь треугольника: " << areaGeron(a, b, c) << endl;
        cout << "Проверка на равнобедренность: " << isosceles(a, b, c) << endl;
    } else {
        cout << "Треугольника не существует" << endl;
    }
}
