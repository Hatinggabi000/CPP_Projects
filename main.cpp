#include <iostream>

using namespace std;

float num1, num2, result;
char operation;
int main()
{

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operator: ";
    cin >> operation;

     switch (operation)
    {
        case '+' :
            cout <<num1<< " + " <<num2<< " = " <<result<< "\n"<< endl;
            break;
        case '-':
            cout <<num1<< " - " <<num2<< " = " <<result<< "\n"<< endl;
            break;
        case '*':
            cout <<num1<< " * " <<num2<< " = " <<result<< "\n"<< endl;
            break;
        case '/':
        if (num2 !=0){
            result = num1 / num2;
            cout << num1<< " / " <<num2<< " = " <<result<< "\n"<< endl;
        }
        else
            cout << "Error! Divided by zero. \n";
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}
