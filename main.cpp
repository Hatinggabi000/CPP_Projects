#include <iostream>

using namespace std;



int main()
{
    const int SUBJ = 8;
    float a, b, c, d, e, f, g, h;
    double sum;
    float average;
    cout << "Please enter grade for the first subject: ";
    cin >> a;
     cout << "Please enter grade for the second subject: ";
    cin >> b;
     cout << "Please enter grade for the third subject: ";
    cin >> c;
     cout << "Please enter grade for the fourth subject: ";
    cin >> d;
     cout << "Please enter grade for the fifth subject: ";
    cin >> e;
     cout << "Please enter grade for the sixth subject: " ;
    cin >> f;
     cout << "Please enter grade for the seventh subject: ";
    cin >> g;
     cout << "Please enter grade for the eighth subject: ";
    cin >> h;
    sum = a+b+c+d+e+f+g+h;
    average = sum/SUBJ;

   if (average >=90) {
    cout << "Your average is: " <<average << ", Excellent!"<< endl;
   }
   else if (average >=80){
    cout << "Your average is: " <<average << ", Very Good!" << endl;
   }
   else if (average >= 70) {
    cout << "Your average is: " <<average << ", Good."<< endl;
   }
   else if (average >= 60) {
    cout << "Your average is: " <<average << ", Needs Improvement."<< endl;
   }
   else {
    cout << "Your average is: " <<average << ", Failing Grade." << endl;
   }
    return 0;
}
