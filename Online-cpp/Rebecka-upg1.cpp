
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>

using namespace std;
//int argc, char** argv
int main()
{
int mil1;
int mil2;
    cout<<"Mätarställningen idag:";
    //Frågar user om input
    cin>>mil1;
    // Döper input från user
    cout<<"Mätarställningen för ett år sen";
    //Frågar user om input igen
    cin>>mil2;
    // Döper det nya input från user
    cout<<"Du har kört: " <<mil1-mil2<< " mil i år";
    //Printar hur mycket user har kört och subtraherar de två inputs från usern för att få hur mycket man kört i år
    return 0;
}
