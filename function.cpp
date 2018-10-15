#include<iostream>
#include<cmath>
#include<cstdlib>
#include"function.h"

using namespace std;

void ExampleInputOutput(){
    string x;
    cout << "Enter your name: " << endl;
    getline (cin, x);
    cout << "\nHello, " << x << "!" << endl;
}

void swap_1(int a, int b){
    int temp;
    temp = a; a = b; b = temp;
    cout << "\nCalling the function of swapping variables by value:\n"
            "The numbers now are a = " << a << "\t&\tb = " << b << "." << endl;
}

void swap_2(int& a, int& b){
    int temp2;
    temp2 = a; a = b; b = temp2;
    cout << "\nCalling the function of swapping variables by reference:\n"
            "The numbers now are a = " << a << "\t&\tb = " << b << "." << endl;
}

void swap_3(int* a, int* b){
    int temp3;
    temp3 = *a; *a = *b; *b = temp3;
    cout << "\nCalling the function of swapping variables by pointer:\n"
            "The numbers now are a = " << *a << "\t&\tb = " << *b << "." << endl;
}

long double CartesianToPolar(int a, int b, double& p, double& ang){
    p = sqrt((a^2) + (b^2));
    ang = atan2(a,b);
    return 0;
}

void IsMultipleOf(int p, int q){
    if (q == 0)
        cout << "Please enter a REAL number.";
    else if (p % q == 0)
        cout << "\nThe given number " << p << " is divisible by " << q << ".\n";
    else
        cout << "\nThe given number " << p << " is NOT divisible by " << q << ".\n";
}

bool Prime(int p){
    if (p < 2)
        return false;
    for(int q = 2; q < p; q++)
        if (p % q == 0)
            return false;
    return true;
}

void ArrayExample1(int a){
    int StaticArray[a];
    int* DynamicArray = new int [a];
    for (int i = 0; i < a; i++){
        StaticArray[i] = i;
        cout << StaticArray[i] << "\t\t"; }
        cout << endl;
    for (int i = 0; i < a; i++){
        cout << &StaticArray[i] << "\t"; }
        cout << endl;
    for (int i = 0; i < a; i++){
        *(DynamicArray+i) = i;
        cout << *(DynamicArray+i) << "\t\t"; }
        cout << endl;
    for (int i = 0; i < a; i++){
        cout << &DynamicArray[i] << "\t"; }
}

void BidimensionalArray(int n){
    int Row[n][n];
    Row[0][0] = 1;
    cout << Row[0][0] << "\t";
    for (int i = 1; i < n; i++)
    {
        Row[0][i] = 0;
        cout << Row[0][i] << "\t";
    }
    for (int i = 1; i < n; i++)
    {
        Row[i][0] = 1;
        cout << "\n" << Row[i][0] << "\t";
        for (int j = 1; j < n; j++)
        {
            Row[i][j] = Row[i-1][j] + Row[i-1][j-1];
            cout << Row[i][j] << "\t";
        }
    }
}

void MultMatrix(int a[][3], int b[][3], int c[][3]){
       for(int i = 0; i < 3; ++i)
            for(int j = 0; j < 3; ++j)
                for(int k = 0; k < 3; ++k)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
}







