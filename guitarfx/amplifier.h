// AMPLIFIER.H

#ifndef __AMPLIFIER_H
#define __AMPLIFIER_H

class Amplifier
{
public:
  Amplifier(); // constructor
  void show_params();
  void set_level(float l);
  void read_samples();
  void process_samples();
  void write_samples();
protected:
  float  level;
  float* buffer;
  int    buffersize;
};

#endif
