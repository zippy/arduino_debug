#include "Debug.h"
void Debug::setup(void) {
  Serial.begin(9600);
};

void Debug::msg(char* msg) {
  Serial.println(msg);
};

void Debug::msg(char* msg,int v) {
  Serial.print(msg);
  Serial.println(v);
};

void Debug::msgf(char* msg,float v) {
  Serial.print(msg);
  Serial.println(v);
};


//void nullprint(char *s) {return;}