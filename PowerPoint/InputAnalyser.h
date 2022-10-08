#ifndef INPUTANALYSER_H
#define INPUTANALYSER_H
#include "Console.h"

class InputType
{
public:
	void command_separator(Input&); //actions or commands

private:
	Input in;
	Actions* actions;
	Commands* commands;
};


class Actions
{

};

class Commands
{

};

#endif 
