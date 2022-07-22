

#include <windows.h>
#include <iostream>

typedef void (*printlnFunc)(std::string str);
typedef void (*printFunc)(std::string str);
typedef std::string (*readlineFunc)(std::string str);

int main()
{
	HMODULE  dll  = LoadLibrary("bin/sclib.dll");


	printlnFunc println = (printlnFunc) GetProcAddress(dll,"println");
	printFunc print = (printFunc) GetProcAddress(dll,"print");
	readlineFunc readline = (readlineFunc) GetProcAddress(dll,"readline");


	println("Welcome to console...");
	int n = std::stoi(readline("in: "));
	print(std::to_string(n));
	return 0;
}






