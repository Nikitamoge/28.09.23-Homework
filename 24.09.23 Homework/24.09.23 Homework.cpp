#include <iostream>
#include <cmath>
using namespace std;



float addition(float* a, float* b) {
    return *a + *b;
}

float subtraction(float* a, float* b) {
    return *a - *b;
}

float multiplication(float* a, float* b) {
    return *a * *b;
}

float division(float* a, float* b) {
    if (*b != 0)
        return *a / *b;
    else {
        cout << "ERROR, division on zero is not allowed!" << "\n";
        return 0;
    }
}

float power(float* a, float* b) {
    return pow(*a, *b);
}

int main()
{
    //Task 1
    int x;
    int* px = &x;
    cout << "enter the number: ";
    cin >> *px;
    *px > 0 ? cout << "number is positive" : *px < 0 ? cout << "number is negative" : cout << "number is equal to 0" << "\n";


    //task 2
    float first_num, second_num;
    char operation;

    cout << "enter first num: ";
    cin >> first_num;

    cout << "enter the operation (+, -, *, /, ^): ";
    cin >> operation;

    cout << "enter second num: ";
    cin >> second_num;

    float* first_pointer = &first_num;
    float* second_pointer = &second_num;

    switch (operation) {
    case '+':
        cout << addition(first_pointer, second_pointer) << "\n";
        break;
    case '-':
        cout << subtraction(first_pointer, second_pointer) << "\n";
        break;
    case '*':
        cout << multiplication(first_pointer, second_pointer) << "\n";
        break;
    case '/':
        cout << division(first_pointer, second_pointer) << "\n";
        break;
    case '^':
        cout << power(first_pointer, second_pointer) << "\n";
        break;
    default:
        cout << "error!" << "\n";
        break;
    }


    //task 3
    int first_num1 = 69;
    int second_num2 = 420;

    cout << "before swap: " << first_num1 << ", " << second_num2 << "\n";

    int* pointer_first = &first_num1;
    int* pointer_second = &second_num2;

    int temp = *pointer_first;
    *pointer_first = *pointer_second;
    *pointer_second = temp;

    cout << "after swap: " << first_num1 << ", " << second_num2 << "\n";

    return 0;
}

