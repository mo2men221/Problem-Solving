#include <iostream>
using namespace std;
#include <cctype>
int main() {
    char c;
    cin >> c;
    char lower;
    char upper;
    if (c>='A' && c<= 'Z') {
        lower = tolower(c);
            cout << lower ;
        }
    else {
        upper = toupper(c);
            cout << upper ;
        }
}
