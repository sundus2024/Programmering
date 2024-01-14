// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>

using namespace std;

int main() {
    
    float vara1kg;
    float vara2kg;
    
    cout << "Vikt för vara nr 1 (kg)";
    cin >> vara1kg;
    
    cout << "Vikt för vara nr 2 (kg)";
    cin >> vara2kg;
    
    float kgp1;
    float kgp2;
    
    cout << "Kilopris för vara nr 1";
    cin >> kgp1;
    
    cout << "Kilopris för vara nr 2";
    cin >> kgp2;
    
    float pris1;
    pris1 = vara1kg*kgp1;
    float pris2;
    pris2 = vara2kg*kgp2;
    
    cout << endl;
    cout << "Kvitto";
    cout << endl;
    cout << "Pris vara 1: " <<pris1<< "kr";
    cout << endl;
    cout << "Pris vara 2: " <<pris2<< "kr";
    cout << endl;
    
    float total;
    total = (pris1+pris2)*0.12;
    
    cout << "Total inklusive moms: " <<total<< "kr";
    cout << endl;
    cout << "Moms = 12%";

    return 0;
}
