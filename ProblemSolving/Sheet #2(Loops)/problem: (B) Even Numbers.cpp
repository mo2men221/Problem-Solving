#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    cin >> num;
    for (int i =1;i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        else if (num <=1) {
            cout << -1;
        }
    }
 
}
