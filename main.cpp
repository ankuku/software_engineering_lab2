#include<iostream>
#include<cmath>
#include<cstdlib>
#include"function.h"

using namespace std;

int main()
{
    ExampleInputOutput();

    int input, c, d, e, f, l, m, g, h, r, s, t, u, x, result;
    int A[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int B[3][3]={{3,3,3},{2,2,2},{1,1,1}};
    int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    double p, q;

    while(1)
    {
        cout << "\n\n\nSelect a program to run from the following by entering its corresponding number (Press 0 to exit):\n"
            "1. Swap intgers by their value.\n"
            "2. Swap integers by reference.\n"
            "3. Swap integers by pointers.\n"
            "4. Multiple returned values. (Cartesian to Polar)\n"
            "5. Default parameters. (Is multiple of)\n"
            "6. Recursive functions. (Prime number)\n"
            "7. Monodimensional array.\n"
            "8. Bidemnsional array - Pascal's triangle revisited.\n"
            "9. Multidimensional arrays as functions parameters (read and write) (Product of a matrix).\n\n";
    cin >> input;
    {
        switch(input)
        {
            case 0: cout << "The program has been truncated.\n";
            break;

            case 1: cout << "\nEnter the first number, a: "; cin >> c;
                    cout << "\nEnter the second number, b: "; cin >> d;
                    swap_1(c,d);
                    cout << endl;
            break;

            case 2: cout << "\nEnter the first number: "; cin >> e;
                    cout << "\nEnter the second number: "; cin >> f;
                    swap_2(e, f);
                    cout << endl;
            break;

            case 3: cout << "\nEnter the first number: "; cin >> l;
                    cout << "\nEnter the second number: "; cin >> m;
                    swap_3(&l, &m);
                    cout << endl;
            break;

            case 4: cout << "\n\nWe are going to solve for a complex number 'z', such that 'z = a + ib'.\n"
                            "Enter a number for 'a': "; cin >> g;
                    cout << "\nEnter a number for 'b': "; cin >> h;
                    CartesianToPolar(g,h,p,q);
                    cout << "\nFor the complex number 'z', the modulus p = " << p << " at angle theta = " << q << ".\n";
            break;

            case 5: cout << "Enter a number to check its divisibility: "; cin >> r;
                    cout << "Enter a number to divide the first value: "; cin >> s;
                    IsMultipleOf(r, s);
                    cout << endl;
            break;

            case 6: cout << "\nEnter a number to check if it is Prime: ";
                    cin >> t;
                    result = Prime(t);
                    if (result == true)
                        cout << "\nIt's a Prime number!\n";
                    else
                        cout << "\nIt's not a Prime number.\n";
            break;

            case 7: cout << "\nEnter a number for a corresponding number columns of integers ( <5 gives best results): ";
                    cin >> u;
                    ArrayExample1(u);
            break;

            case 8: cout << "\nEnter the number of rows and column for n by n matrix: ";
                    cin >> x;
                    BidimensionalArray(x);
            break;

            case 9:
                    MultMatrix(A, B, C);
                    cout << "\nMultiplication of matrix A & B is: " << endl ;
                    for(int i = 0; i < 3; i++)
                    {
                        for(int j = 0; j < 3; j++)
                        {
                            cout << "\t" << C[i][j];
                        }
                        cout << endl;
                    }
            break;

            default: continue;
            break;
        }
    }
    if (input == 0)
        break;
    }
    return 0;
}
