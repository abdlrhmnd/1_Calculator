#include <iostream>
#include <math.h>
using namespace std;

// 		1- Summation (+)
int fun1(int a, int b)
{
    int sum = a + b;
    cout << "Sum: ";
    return sum;
}
//      Created By abdelrhman ahmed

// 		2- Subtraction (-)
int fun2(int a, int b)
{
    int sub = a - b;
    cout << "sub: ";
    return sub;
}
//      Created By asser mohamed

// 		3- Multiplication (*)
int fun3(int a, int b)
{
    int mul = a * b;
    cout << "Mul: ";
    return mul;
}
//      Created By asser mohamed

// 		4- Division (/)
int fun4(int a, int b)
{
    int div = a / b;
    cout << "Div: ";
    return div;
}
//      Created By abdelrhman ahmed

// 		5- Modulus (%)
int fun5(int a, int b)
{
    int mod = a % b;
    cout << "Mod: ";
    return mod;
}
//      Created By Sameh Nasrallah

// 		6- Power (x^y)
int fun6(int a, int b)
{
    int result = 1;
    if (b < 0) {
        cout << "Power: Undefined for negative exponent" << endl;
        return 0;
    }
    for (int i = 0; i < b; i++)
        result *= a;
    cout << "Power: ";
    return result;
}

// Created By Abdlrhmn Diab

// 		The Main Function
int main()
{
    int X, Y;
    cout << "Enter two integers: ";
    cin >> X >> Y;

    cout << fun1(X, Y) << endl; // Summation
    cout << fun2(X, Y) << endl; // Subtraction
    cout << fun3(X, Y) << endl; // Multiplication
    cout << fun4(X, Y) << endl; // Division
    cout << fun5(X, Y) << endl; // Modulus
    cout << fun6(X, Y) << endl; // Power

    return 0;
}
//      Created By Sameh Nasrallah
//      Created By Tech-Titans Team
