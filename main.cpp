#include <iostream>

using namespace std;

int num1;
int num2;
int sum;
int numToSubtract;
int difference;

int main()
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Enter a number to subtract from the sum: ";
    cin >> numToSubtract;
    difference = sum - numToSubtract;

    cout << "The sum of " <<num1<< " and " <<num2<< " is "<<sum<< ".\n";
    cout << "The result after subtracting " <<numToSubtract<< " from " <<sum<< " is " <<difference<< ".";
return 0;
}
