#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int O = N;
    int R = 0;
    while (N>0) {
        int digit = N%10;
        R = R *10 + digit;
        N/=10;
    }
    if (R == O) {
        cout << R << endl << "YES";
    }
    else {
        cout << R << endl << "NO";
    }
}
