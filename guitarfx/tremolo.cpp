#include <iostream>
#include "tremolo.h"

using namespace std;

void Tremolo::show_level()
{
  cout << "Tremolo amp level: " << level << endl;
  Amplifier::show_level();
}