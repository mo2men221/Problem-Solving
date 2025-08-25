#include <iostream>
using namespace std;
int main() {
    int num;
    int year;
    int rem;
    int month;
    int days;
    cin >> num;
    year = num /365;
    rem = num % 365;
    month = rem / 30;
    days = rem % 30;
    cout << year << " years"<< endl << month << " months" << endl << days << " days";
}
