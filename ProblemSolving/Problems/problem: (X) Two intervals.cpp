#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long l1,r1,l2,r2,start,end;
    cin >> l1 >> r1 >> l2 >> r2;
    start = max(l1,l2);
    end = min (r1,r2);
    if (start <= end) {
        cout << start << " " << end << endl;
    }
    else {
        cout << -1 << endl;
    }
    }
 
