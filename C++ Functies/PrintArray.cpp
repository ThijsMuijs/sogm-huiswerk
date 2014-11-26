#include <iostream>

using namespace std;

void printArray(int a[], int size){
for (int i = 0; i < size ; i++){
cout << i+1 << "	" << a[i] << endl;
  }
}

int main(){

int size;
cout << "geef grootte van array" << endl;
cin >> size;

int array[size];
for(int i = 0; i < size; i++){
array[i] = rand() % 2;
}

printArray(array, size);
return 0;
}