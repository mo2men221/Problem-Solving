#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0;i<n;i++) {
        cin >> x[i];
    }
   int max = x[0];
    int min = x[0];
    for (int i = 0;i<n;i++) {
        if (x[i]>max) {
            max = x[i];
        }
        if (x[i]< min) {
            min = x[i];
        }
    }
    cout << max << " " << min;
}