#ifndef Debug_h
#define Debug_h

#include "Arduino.h"

class Debug {
public:
  void setup(void);
  void msg(char *);
  void msg(char *,int);
  void msgf(char *,float);
};
#endif