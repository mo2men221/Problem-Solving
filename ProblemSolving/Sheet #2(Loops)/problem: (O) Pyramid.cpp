#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A;
    cin >> A ;
    for (int i =0;i<A;i++) {
        for (int j =0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
