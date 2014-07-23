/*
 * GCodeProcessor.h
 *
 *  Created on: 15 maj 2014
 *      Author: MattLech
 */

#ifndef GCODEPROCESSOR_H_
#define GCODEPROCESSOR_H_

#include "Command.h"
#include "Config.h"

#include "GCodeHandler.h"
#include "G00Handler.h"
#include "G28Handler.h"

#include "F11Handler.h"
#include "F12Handler.h"
#include "F13Handler.h"
#include "F81Handler.h"
#include "F82Handler.h"
#include "F83Handler.h"

class GCodeProcessor {
public:
	GCodeProcessor();
	virtual ~GCodeProcessor();
	int execute(Command* command);
protected:
	GCodeHandler* getGCodeHandler(CommandCodeEnum);
private:
	void printCommandLog(Command*);
};

#endif /* GCODEPROCESSOR_H_ */
