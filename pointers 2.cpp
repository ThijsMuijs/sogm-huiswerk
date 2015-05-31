#include <iostream>

using namespace std;

int functionScope(int var)
{
    var = 123;
    
    return var;
}

int* pointerScope(int* varPointer)
{
    *varPointer = 123;
    
    return varPointer;
}

int main()
{
    int var = 10;
    int* varPointer = &var;
    
    cout << "Waarde van variabele 'var': " << var << endl;
    cout << "Waarde via 'varPointer': " << *varPointer << endl << endl;
    cout << "Uitkomst van 'functionScope(var)': " << functionScope(var) <<  endl;
    cout << "Waarde van 'var' is niet veranderd: " << var << endl << endl;
    
    cout << "Uitkomst van 'pointerScope(varPointer)': " << *pointerScope(varPointer) <<  endl;
    cout << "Waarde van variabele 'var' is nu wel veranderd: " << var << endl;
    
    
    return 0;
}