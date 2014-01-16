#ifndef _AMPLIFIER_H_
#define _AMPLIFIER_H_

#define BUFFERSIZE 10

class Amplifier
{
public:
  Amplifier(); // constructor
  void show_level();
protected:
  long level;
};

#endif