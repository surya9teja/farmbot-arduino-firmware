#ifndef COMMAND_H_
#define COMMAND_H_

#include "Arduino.h"
//#include "string.h"

enum CommandCodeEnum
{
  CODE_UNDEFINED = -1,
  G00 = 0,
  G01,
  G28,
  F01,
  F02,
  F03,
  F11,
  F12,
  F13,
  F81,
  F82,
  F83
};

#define NULL 0

class Command {
	CommandCodeEnum codeEnum;
public:
	Command(String);
	void print();
	CommandCodeEnum getCodeEnum();
	double getX();
	double getY();
	double getZ();
	double getS();
private:
	CommandCodeEnum getGCodeEnum(char* code);
	void getParameter(char* charPointer);
};

#endif /* COMMAND_H_ */
