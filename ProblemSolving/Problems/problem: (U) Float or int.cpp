#include <bits/stdc++.h>
using namespace std;
 
int main() {
    float num, x;
    cin >> num;
 
    if (num - int(num) == 0) {
        cout << "int " << num;
    }
    else {
        x = num - int(num);
        cout << "float " << int(num) << " " << std::fixed << std::setprecision(3) << x;
    }
    }
