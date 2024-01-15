
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main() { // I main körs koden, funktioner och definitioner integreras här
    int mil1; // mil idag
    int mil2; // mil ett år sedan
    
    cout<< "Mätarställningen idag i (mil)?"; // cout används för frågor och dataoutput 
    cin>> mil1; // cin används för user input, detta kalkyleras sedan i en funktion
    
    cout<< "Mätarställningen för ett år sedan i (mil)?";
    cin>> mil2;
    
    int milt; // mil total som utförs genom funktionen nedan
    milt = mil1-mil2; // funktion räkna ut mil körda i år mha user input
    float liter; // mängd liter tankat

    cout<< "Hur mycket liter bensin har du tankat?";
    cin>> liter;
    
    cout<< endl; // används för blanksteg eller break, ett mellanrum
    cout<< "Antal körda mil i år: " <<milt<< "mil";
    
    cout<< endl;
    cout<< "Mängd tankad bränsle i liter: " <<liter<< "l";
    
    cout<< endl;
    cout<< "Snittförbrukningen är: " <<liter/milt<< "l/mil"; //funktion av liter diverat med antal mil körda
    
    
    return 0; // programet är slut här och körs nu 
}
