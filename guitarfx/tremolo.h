// TREMOLO.H

#ifndef __TREMOLO_H
#define __TREMOLO_H

#include "amplifier.h"

class Tremolo : public Amplifier
{
public:
  Tremolo();
  void samplerate(int a);
  void nrofchannels(int b);
  void set_rate(float r);
  void set_depth(float d);
  void show_params();
  void process_samples();
private:
  float  channels,sr,rate, depth;
  float* buffer;
  int    buffersize;
};

#endif
