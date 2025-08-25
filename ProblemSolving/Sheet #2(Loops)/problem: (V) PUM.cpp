#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 4;j++) {
            if (j % 4 != 0) {
                cout << x << " ";
            }
            else {
                cout <<"PUM";
            }
            x++;
        }
        cout << endl;
    }
 
 
}
