#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
 
    while (true) {
        cin >> N >> M;
        if (N <= 0 || M <= 0) break;
 
        int sum = 0;
 
        for (int i = min(N, M); i <= max(N, M); i++) {
            cout << i << " ";
            sum += i;
        }
 
        cout << "sum =" << sum << endl;
    }
}
