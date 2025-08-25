#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int SumOfDigits = 0;
        for (int j = 0 ; j <= 4; j++) {
            SumOfDigits += (int)(i / pow(10,j)) %10;
        }
        if (SumOfDigits >= a && SumOfDigits <= b) {
            sum+=i;
        }
        }
    cout << sum;
    }
