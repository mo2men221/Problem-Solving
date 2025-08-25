#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin >> n;
    int y = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int ones =0;
        int sum =0;
        while (x > 0) {
            int rem = x % 2;
            x/=2;
            if (rem == 1) {
                ones++;
            }
        }
        for (int j = 0; j < ones; j++) {
            sum += (int)pow(2, j);
        }
        cout << sum << endl;
    }
}
