 // AMPLIFIER.CPP

#include "amplifier.h"
#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;

Amplifier::Amplifier()
{
  level = 1;
  buffersize = 256;
  buffer = new float[buffersize];
}

void Amplifier::show_params()
{
  cout << "Amplifier level: " << level << endl;
}

void Amplifier::set_level(float l)
{
  level = l;
}

void Amplifier::read_samples()
{
  srandom(time(NULL));
  for (int i = 0; i < buffersize; i++)
  {
    buffer[i] = cos(((float)random()/RAND_MAX)*2.0*M_PI);
  }
}

void Amplifier::process_samples()
{
  for (int i = 0; i < buffersize; i++)
  {
    buffer[i] *= level;
  }
}

void Amplifier::write_samples()
{
  for (int i = 0; i < buffersize; i++)
  {
    cout << buffer[i] << endl;
  }
}
