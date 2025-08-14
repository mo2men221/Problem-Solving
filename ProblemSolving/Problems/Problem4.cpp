#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int x [n];

    for (int i =0; i<n; i++) {
        cin >> x[i];
    }
    int even = 0;
    int odd  = 0;
    for (int i =0; i<n; i++) {
        if (x[i] % 2 == 0){
            even ++;
        }
        else {
            odd ++;
        }
    }
    cout << even << " "<< odd;
}