#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool is_found = false;
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            is_found = true;
            cout << i;
            break;
        }
    }
    if (is_found == false) {
        cout << -1;
    }

}
