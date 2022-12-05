#include "Console.h"
#include <vector>

void Parser::parse_command()
{
	get_token(prs);
}

void Parser::get_token(std::string& cmd)
{
	std::vector<std::string> commands = { "CREATE", "REMOVE", "ADD", "ROTATE", "CHANGE", "DELETE", "LOAD", "SAVE" };
	std::vector<std::string> option = { "LINE", "TRIANGLE", "CIRCLE", "RECTANGLE", "SQUARE", "TEXT", "ELIPSE", "SLIDE" };
	//inside ()
	for (int j = 0; j < cmd.size(); j++)
	{
		cmd[j] = std::toupper(cmd[j]);
	}
	if (std::find(commands.begin(), commands.end(), cmd) != commands.end())
	{
		std::cout << cmd;
	}
	else if (std::find(option.begin(), option.end(), cmd) != option.end())
	{
		std::cout << cmd;
	}
	else
	{
		std::cout << "Exception: Command not found.";
	}
}

std::string Parser::get_lexeme(const std::string& str)
{
	//create slide
	//add line(12,23,14,23,blue)
	//create add remove(shape) rotate change delete(slide)
	//std::vector<std::string> commands = { "CREATE", "REMOVE", "ADD", "ROTATE", "CHANGE", "DELETE" };
	size_t i = 0;
	while (true)
	{
		std::string cmd;
		while (i != str.size())
		{
			cmd += str[i];
			if (str[i + 1] == ' ')
			{
				break;
			}
			else
			{
				i++;
			}
		}
		std::cout << cmd << std::endl;
		if (i++ == str.size())
		{
			break;
		}
		else
		{
			i++;
			cmd = "";
		}
	}
	return "";
}
