// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    int input;
    
    cout << "Skriv in ett heltal:";
    cin >> input;
    
    if(45 < input && input < 63) {
        cout << "GRATTIS! DU VANN! BRA JOBBAT!";
    } else {
        cout << "GAME OVER!";
    }

    return 0;
}
