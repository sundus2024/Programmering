
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    float a;
    float b;
    
    cout << "Skriv in den enda katetern:";
    cin >> a;
    
    cout << "Skriv in den andra katetern:";
    cin >> b;
    
    float c;
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Hypotenusan är: " <<c<< endl;

    return 0;
}
