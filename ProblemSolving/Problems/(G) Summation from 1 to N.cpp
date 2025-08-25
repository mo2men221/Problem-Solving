#include <iostream>
using namespace std ;
int main() {
    long long n;
    long long i;
    long long sum;
    cin >> n;
    sum= 0;
    for (i=0;i<=n;i++) {
        sum+=i;
    }
    cout << sum;
}
