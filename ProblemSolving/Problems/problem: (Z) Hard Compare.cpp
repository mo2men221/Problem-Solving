#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    double aa = B * log(A);
    double bb = D * log(C); 
 
    if (aa > bb ) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    }
 
 
