#include <iostream>
using namespace std;
int main() {
    int A;
    int B;
    int C;
    int max;
    int min;
    cin >> A;
    cin >> B;
    cin >> C;
    max = A;
    min = A;
    if (B>max) {
        max = B;
    }
    if (B<min) {
        min = B;
    }
    if (C>max) {
        max  = C;
    }
    if (C < min) {
        min = C;
    }
    cout << min << " " << max;
}
