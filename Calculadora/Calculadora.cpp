
//Author: Alonso Caballero López
//Email: alonso.calo912@gmail.com
//Sep 14, 2021

#include <iostream>

using namespace std;
int main() {

    int num1 = 0;
    int num2 = 0;
    int result = 0;
    string op;


    cout << "Enter the first number" << endl;
    cin >> num1; // read 1st number

    cout << "Enter the second number" << endl;
    cin >> num2; // read 2nd number

    cout << "Enter the operator" << endl;
    cin >> op; // read operator

    if(op == "+"){result = num1 + num2;}
    if(op == "-"){result = num1 - num2;}
    if(op == "*"){result = num1 * num2;}
    if(op == "/"){result = num1/num2;}
    if(op == "%"){result = num1%num2;}

    cout << "Result is = " << result << endl; //print the result

    return 0;

}
