#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i =0;i <n;i++) {
        cin >> x[i];
    }
    long long sum = 0;
    for (int i = 0; i < n;i++) {
        sum+=x[i];
    }
    cout << abs(sum);
 
}
