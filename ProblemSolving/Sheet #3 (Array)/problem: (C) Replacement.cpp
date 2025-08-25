#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i =0;i <n;i++) {
        cin >> x[i];
    }
 
    for (int i = 0; i < n;i++) {
        if (x[i] > 0) {
            x[i] = 1;
        }
        else if (x[i] < 0) {
            x[i] = 2;
        }
        else {
            x[i] = 0;
        }
        cout << x[i] << " ";
    }
 
 
 
}
