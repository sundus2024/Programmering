
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>

using namespace std;

int main() {
int mil1;
int mil2;
    cout<<"Mätarställningen idag (mil):";
    //Frågar user om input
    cin>>mil1;
    // Döper input från user
    cout<<"Mätarställningen för ett år sen (mil)";
    //Frågar user om input igen
    cin>>mil2;
    
int mil;
mil = mil1-mil2;
float bensin1;
    
    cout<<"Bensin förbrukat (liter):";
    cin>>bensin1;
    // Döper det nya input från user
    cout<< endl;

    cout<<"Kört i år: " <<mil<< " mil";
    //Printar hur mycket user har kört och subtraherar de två inputs från usern för att få hur mycket man kört i år
    cout<< endl;
    cout<<"Bensin: " <<bensin1<< "l";
    cout<< endl;
    cout<<"Förbrukning: " <<bensin1/mil<< "l/mil";
    return 0;

}
