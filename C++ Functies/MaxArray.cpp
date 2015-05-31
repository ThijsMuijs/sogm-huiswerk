#include <iostream>

using namespace std;

int maxArray(int a[], int size){
int max = 0;
for (int i = 0; i < size ; i++){
	if( a[i] > max)
	{max = a[i];}
  }
return max;
}

int main(){

int size;
cout << "geef grootte van array" << endl;
cin >> size;

int array[size];
for(int i = 0; i < size; i++){
array[i] = rand() % 1000;
cout << array[i] << endl;
}

cout << "hoogste getal in de array is: " << maxArray(array, size) << endl;
return 0;
}