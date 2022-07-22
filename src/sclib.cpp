#include <iostream>
#include "sclib.h"

void println(std::string str)
{
	std::cout << str << std::endl;
}

void print(std::string str)
{
	std::cout << str;
}

std::string read(std::string str)
{
	std::string in;
	std::cout << str;
	std::cin >> in;
	return in;
}

int readint(std::string str)
{
	int in;
	std::cout << str;
	std::cin >> in;
	return in;
}


std::string readline(std::string str)
{
	std::string in;
	std::cout << str;
	std::getline(std::cin,in);
	return in;
}