#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i =0; i<n; i++) {
        cin >> x[i];
    }
    cout << endl;
    int y;
    cin >> y;
    bool flag = false;
    for (int i =0; i<n; i++) {
        if (x[i]== y) {
            flag = true;
            cout << i;
        }
    }
    if (flag == false) {
        cout << -1;
    }
}