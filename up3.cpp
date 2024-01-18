#include<iostream>

using namespace std;

int main() {
    float vara1;
    float vara2;
    
    float priskg1;
    float priskg2;
    
    cout<< "Vikt för vara nr.1 i (kg): ";
    cin>> vara1;
    cout<< "Vikt för vara nr.2 i (kg): ";
    cin>> vara2;
    
    cout<< "Pris per kilo för vara nr.1 i (kr): ";
    cin>> priskg1;
    cout<< "Pris per kilo för vara nr.2 i (kr): ";
    cin>> priskg2;
    
    float total1;
    total1 = vara1*priskg1;
    
    float total2;
    total2 = vara2*priskg2;
    
    float totalink;
    totalink = (total1+total2)*1.12;
    
    cout<< "Här är ditt kvitto--> ";
    
    cout<<  endl;
    cout<< "Totallpriset ex moms: " <<total1 + total2<< "kr";
    
    cout<< endl;
    cout<< "Totallpriset ink moms: " <<totalink<< "kr";
    
    cout<< endl;
    cout<< "Moms 12%";
    
    
    return 0;
}