#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B;
    cin >> A >> B;
    bool found = false;
    for (int i = A; i <= B; i++) {
        int num =i;
        bool lucky = true;
        while (num>0) {
            int digit = num%10;
            if (digit != 4 && digit != 7) {
                lucky = false;
            }
            num/=10;
        }
        if (lucky == true) {
            found = true;
            cout << i << " ";
        }
 
    }
    if (found == false) {
        cout << -1;
    }
    }
