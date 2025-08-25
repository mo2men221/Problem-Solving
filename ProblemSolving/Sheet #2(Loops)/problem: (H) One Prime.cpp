#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long x;
    cin >> x;
    bool bol = true;
    for (int i = x-1 ; i >=2;i--) {
        if (x % i == 0) {
            bol = false;
        }
    }
    if (bol == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    }
