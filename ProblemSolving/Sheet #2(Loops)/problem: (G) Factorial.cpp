
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t,n,fact;
    cin >> t;
 
    while (t > 0) {
        cin >> n;
        t--;
        fact = 1;
        for (int i = n ; i >= 1; i--) {
            fact *= i;
        }
        cout << fact << endl;
    }
 
    }
