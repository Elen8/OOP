#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>

class Input
{
public:
	void get_input();
	void parser(std::string&);
	void get_output();
	void parser(std::string&);

private:
	std::string input;
	std::string output;
};

#endif 
