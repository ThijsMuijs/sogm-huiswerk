#include <iostream>

using namespace std;

void printArray(int a[], int size){
for (int i = 0; i < size ; i++){
cout << i+1 << "	" << a[i] << endl;
  }
}

void rotArray(int a[], int size){
int eerste = a[0];

for(int i = 0; i < size; i++){
   if( i == size-1)
   {a[i] = eerste;}
   else
   {a[i] = a[i+1];}
}

}

int main(){

int size;
cout << "geef grootte van array" << endl;
cin >> size;

int array[size];
for(int i = 0; i < size; i++){
array[i] = rand() % 10;
}

cout << "array voor rotatie: " << endl;
printArray(array, size);
rotArray(array, size);
cout << "array na rotatie: " << endl;
printArray(array, size);
return 0;
}