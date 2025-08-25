#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num1,num2,max;
    max = 0;
    cin >> num1;
    for (int i = 1; i <= num1 ; i++) {
        cin >> num2;
        if (num2 >= max) {
            max = num2;
        }
    }
cout << max;
}
