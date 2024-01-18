// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a;
    int b;
    int c;
    
    cout << "Skriv ett tal";
    cin >> a;
    
    cout << "Skriv ett till tal";
    cin >> b;
    
    cout << "Skriv ett tredje tal";
    cin >> c;
    
    if (b < a && c < a) {
        cout << a<< " är det största värdet";
    } else if (a < b && c < b) {
        cout << b<< " är det största värdet";
    } else {
        cout << c<< " är det största värdet";
    }
    
    return 0;
}
