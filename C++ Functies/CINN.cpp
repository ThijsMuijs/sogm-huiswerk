#include <iostream>

using namespace std;

int optellen(int a, int b){
    return a+b;
}

int main(){
int a, b = 0;
cout << "geef getal voor parameter a" << endl;
cin >> a;
cout << "a = " << a << endl;
cout << "geef getal voor parameter b" << endl;
cin >> b;
cout << "b = " << b << endl;
cout << "a+b = " << optellen(a, b)  << endl;
return 0;
}