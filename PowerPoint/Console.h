#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>

class Input
{
public:
	void get_input();
	void get_output();
	//void parser(std::string&);

private:
	std::string input;
	std::string output;
};

void Input::get_input()
{
	std::string input;
	std::cin >> input;
}

void Input::get_output()
{
	//if token is ready, give it
}

//void Input::parser(std::string& input)
//{
//	
//}

class Parser
{
private:
	std::string prs;
public:
	Parser(std::string& str) :
		prs(str) {}

	void parse_command();
	void get_token(std::string&);
	std::string get_lexeme(const std::string&);
};

#endif 
