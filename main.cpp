#include <iostream>

using namespace std;

int num, result, i;

int main()

{
    cout << "Give any positive number: ";
    cin >> num;

     for (i = 1; i <= 10; i++) {
     result = num * i;
     cout << num << " * " << i << " = " << result << endl ;
     }
    return 0;
}
