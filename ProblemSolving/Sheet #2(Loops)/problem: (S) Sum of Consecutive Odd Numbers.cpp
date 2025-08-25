#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,x,y;
    cin >> t;
    for (int i =0;i<t; i++) {
        int sum =0;
        cin >> x >> y;
        for (int j =min (x,y)+1;j < max (x,y);j++) {
            if (j % 2 !=0) {
                sum+=j;
            }
        }
        cout << sum << endl;
    }
 
}
