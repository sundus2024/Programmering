// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    int tal;
    float medelvarde;
    
    cout << "Skriv ditt första heltal:";
    cin >> tal;
    medelvarde = tal;
    
    cout << "Skriv ditt andra heltal:";
    cin >> tal;
    medelvarde = (medelvarde + tal);
    
    cout << "Skriv ditt tredje heltal:";
    cin >> tal;
    medelvarde = (medelvarde + tal);

    cout << "Skriv ditt fjärde heltal:";
    cin >> tal;
    medelvarde = (medelvarde + tal);

    cout << "Skriv ditt femte heltal:";
    cin >> tal;
    medelvarde = (medelvarde + tal)/5;
    
    cout << endl;
    cout << "Medelvärdet för de fem angivna talen: " <<medelvarde<< endl;

    return 0;
}
