
#include <iostream>
using namespace std;
int main() {
    int A;
    int B;
    cin >> A;
    cin >> B;
    if ( A % B  == 0 || B % A == 0) {
        cout << "Multiples";
    }
    else {
        cout << "No Multiples";
    }
}
