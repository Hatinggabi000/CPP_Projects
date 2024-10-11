#include <iostream>

using namespace std;

int i;
int main()
{
    cout << "Enter any number: ";
    cin >> i;

        if (i % 2 == 0) {
            cout << i<< " is even number.";
        } else {
            cout << i<< " is odd number.";
        }

    return 0;
}
