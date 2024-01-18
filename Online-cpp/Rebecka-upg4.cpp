
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
#include<iostream>

using namespace std;

int main() {
    
    int A;
    int B;
    int ny;
    
    cout << "Skriv din variabel A:";
    cin >> A;
    
    cout << "Skriv din variable B:";
    cin >> B;
    
    ny = A;
    A = B;
    B = ny;

    cout << "A = " <<A<< " B = " <<B<< endl;

    return 0;
}
