#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <time.h>
#include "animations.h"
#include "battle_init.h"
#include "mainmenu.h"
#include "battle.h"


using namespace std;



int main() {

	HWND console = GetConsoleWindow();
	RECT w;
	GetWindowRect(console, &w);
	
	MoveWindow(console, w.left, w.top, 600, 550, TRUE); //Resize console window
	mainmenu();

	return 0;
}