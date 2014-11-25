#include <iostream>
#include "kerstboom.h" //"file.name" : zoekt in zelfde directory eerst

using namespace std;

int main()
{
int aantalkerstbomen = 0;

	cout << "Hoeveel kerstbomen wil je hebben?" << endl;
	cin >> aantalkerstbomen;

	cout << "Aantal kerstbomen: " << aantalkerstbomen << endl;

for(int boom = 0; boom < aantalkerstbomen; ++boom){
  for(int regel = 0; regel < HOOGTE; ++regel){

  for(int spatie = 0; spatie< HOOGTE-1-regel ;++spatie){
   cout << " "; }

   for(int ster = 0; ster<((regel*2)+1);++ster){
   cout << "*"; }

	cout << endl;
	}
}

	return 0;
}