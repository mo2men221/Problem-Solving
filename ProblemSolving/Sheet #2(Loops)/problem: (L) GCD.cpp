#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long A,B;
    cin >> A >> B;
   int max = 0;
    if (A > B){
        for (int i = 1 ; i <= A; i++) {
        bool x = false;
        if (A % i == 0) {
            if (B % i == 0) {
                x = true;
            }
        }
        if (x ==true && i > max) {
            max = i;
            }
        }
        cout << max;
    }
    else {
        for (int i = 1 ; i <= B; i++) {
            bool x = false;
            if (B % i == 0) {
                if (A % i == 0) {
                    x = true;
                }
            }
            if (x ==true && i > max) {
                max = i;
            }
        }
        cout << max;
    }
    }
