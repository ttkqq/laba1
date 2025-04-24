#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;
using ushort_int = unsigned short int;  

float area(ushort_int a, ushort_int b, ushort_int c, ushort_int d){
    float ar = (((a+b)/2) * sqrt(pow(c, 2) - pow((((pow(a-b, 2)) + pow(c, 2) - pow(d, 2)) / abs(2*(a-b))), 2)));
    return ar;
}


int check(ushort_int a, ushort_int b, ushort_int c, ushort_int d){
    
    if ((a>0) && (b>0) && (c>0) && (d>0) && area(a,b,c,d)>0 &&
        (b + c + d > a) && (d + c + a > b) && (b + d + a > c) && (b + c + a > d)){
        return 1;
    }
    else{
        return 0;
    }            
}


ushort_int perimeter(ushort_int a, ushort_int b, ushort_int c, ushort_int d){
    ushort_int perim = (a + b + c + d); 
    return perim;
}


ushort_int midline_length(ushort_int a, ushort_int b){
    ushort_int midline = ((a+b)/2);
    return midline;
}


int main(){
    cout << "это программа для счёта периметра, площади и длины средней линии трапеции" << endl;    
    ushort_int a = 0; 
    cout << "Введите основание трапеции номер один: "; 
    cin >> a;
    
    ushort_int b = 0; 
    cout << "Введите основание трапеции номер два: "; 
    cin >> b;
    
    ushort_int c = 0; 
    cout << "Введите сторону номер один: "; 
    cin >> c;
    
    ushort_int d = 0; 
    cout << "Введите строну номер два: "; 
    cin >> d;
    cout << endl;
    
    if (check(a, b, c, d) == 1){
        cout << "Периметр трапеции: " << perimeter(a, b, c, d) << endl;
        cout << "Площадь трапеции: " << area(a,b,c,d) << endl;
        cout << "Длина средней линии трапеции: " << midline_length(a,b) << endl;
    }
    else{
        cout<<"данной трапеци не существует, пожалуйста введите другие числа"<<endl;
    }

}
