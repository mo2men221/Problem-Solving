#include <bits/stdc++.h>
using namespace std ;
int main() {
    double A;
    double B;
    cin >> A >> B;
    double sum = A / B ;
    cout <<"floor "<< A <<" / "<< B<<" = "<<floor(sum)<< endl;
    cout <<"ceil "<< A <<" / "<< B<<" = "<<ceil(sum) << endl;
    cout <<"round "<< A <<" / "<< B<<" = "<<round(sum);
}
