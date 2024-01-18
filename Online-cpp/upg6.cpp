// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    int input;
    float tal1;
    float tal2;
    float tal;
    
    cout << "Skriv siffran för det räknesätt du vill ha: 1 = +, 2 = -, 3 = *, 4 = /";
    cin >> input;
    
    cout << "Skriv in ett heltal:";
    cin >> tal1;
    
    cout << "Skriv in ett till heltal:";
    cin >> tal2;
    cout << endl;
    
    if(input == 1) {
        tal = tal1+tal2;
        cout << tal;
        
    } else if (input == 2) {
        tal = tal1-tal2;
        cout << tal;
        
    } else if (input == 3) {
        tal = tal1*tal2;
        cout << tal;
        
    } else if (input == 4) {
        tal = tal1/tal2;
        cout << tal;

    }

    return 0;
}
