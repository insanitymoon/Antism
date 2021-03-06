#include "application.h"
#include "config.h"
#include <fstream>

std::fstream cFile;
int main()
{	
	cFile.open("config.cfg");
	Config::loadConfig(&cFile);
	Application* win = new Application(Config::applicationWidth, Config::applicationHeight, Config::vsync, "Antism");
	win->run(); 
	return 0;
}