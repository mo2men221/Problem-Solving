#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T,N;
    cin >> T ;
    while (T--){
        cin >> N;
        if (N == 0) {
            cout << 0 << " ";
        }
        while (N >0) {
            cout << N%10 << " ";
            N/=10;
        }
        cout << endl;
    }
    }
