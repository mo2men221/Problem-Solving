#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    for (int i = 1 ; i <= n; i++) {
        bool x = false;
        if (n % i == 0) {
            x = true;
        }
        if (x == true) {
            cout << i << endl;
        }
    }
    }
