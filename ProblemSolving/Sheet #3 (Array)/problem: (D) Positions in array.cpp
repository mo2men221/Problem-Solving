#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i =0;i <n;i++) {
        cin >> x[i];
    }
 
    for (int i = 0; i < n;i++) {
      if (x[i] <=10) {
          cout << "A["<<i<<"] = "<<x[i]<< endl;
      }
    }
    
}
