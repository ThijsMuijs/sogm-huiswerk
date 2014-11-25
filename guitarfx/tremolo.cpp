 #include "tremolo.h"
#include <iostream>
#include <math.h>

using namespace std;


Tremolo::Tremolo() : Amplifier()
{
  rate = 1.0;
  depth = 0.0;
}

void Tremolo::samplerate(int a)
{
  sr = a;
}

void Tremolo::nrofchannels(int b)
{
  channels = 1/b;
}


void Tremolo::set_rate(float r)
{
  rate = r;
}

void Tremolo::set_depth(float d)
{
  depth = d;
}

void Tremolo::show_params()
{
  cout << "Tremolo level: " << level << endl;
  cout << "Tremolo rate: " << rate << endl;
  cout << "Tremolo dopeness: " << depth << endl;
}

void Tremolo::process_samples()
{

for (int i = 0; i < buffersize; i++ )
  {
    buffer[i] *= ((sin(2*M_PI*(i/(channels*sr))*rate)*.5+.5)*depth+(1-depth))*level;
  }
}
