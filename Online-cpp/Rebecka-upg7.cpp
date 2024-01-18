// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    int arsmodell;
    int ar;
    
    cout << "Skriv det aktuella årtalet:";
    cin >> ar;
    
    cout << "Vad är din bils årsmodell? (skriv året)";
    cin >> arsmodell;
    cout << endl;
    
    if ((ar-arsmodell) < 5) {
        cout << "Välj en helförsäkring";
    } else {
        cout << "Välj en halvförsäkring";
    }
    
    return 0;
}
