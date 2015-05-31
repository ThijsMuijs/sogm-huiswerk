#include <iostream>

using namespace std;


int main()
{
unsigned short year = 2013;
unsigned short * yearpointer = &year;
cout << "Inhoud van de variabele year: " << year << endl;
cout << "Inhoud van de pointer yearpointer: " << (unsigned long) yearpointer << endl;
cout << "Inhoud van waar de pointer yearpointer naar wijst: " << *yearpointer << endl;
  // geef year via de pointer een nieuwe waarde
*yearpointer = rand() % 10000;
cout << "Inhoud van de variabele year: " << year << endl;

unsigned short * anotheryearpointer = yearpointer;
cout << "Inhoud van de pointer anotheryearpointer: " << (unsigned long) yearpointer << endl;
cout << "Inhoud van waar de pointer anotheryearpointer naar wijst: " << *anotheryearpointer << endl;
*anotheryearpointer = 200;
  cout << "Inhoud van de variabele year: " << year << endl;
  cout << "Inhoud van waar de pointer yearpointer naar wijst: " << *yearpointer << endl;
return 0;
}