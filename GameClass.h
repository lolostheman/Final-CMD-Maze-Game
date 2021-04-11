/*****************************************************
 * Final Project: Maze Game
 * Programmer: Logan Morro
 * Due Date: 4/30/2020
 * 
 * EGRE 491, Spring 2020		Instructor: Robert Klenke
 * 
 * Pledge: I have neither give nore recieved unautthorized aid on this program.
 * 
 * Description: This is my header file, this declares my class "Console" and also
 * 				declares the functions and variables I will use for my program.
 * 
 * output: there is no output for this header file.
 * 
 ********************************************/
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <termios.h>
//#include </home/pi/ncursesss/ncurses-6.1/include/ncurses_dll.h>
//#include </home/pi/ncursesss/ncurses-6.1/include/ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <cstdlib>

using namespace std;



class Console
{
	public:
	Console();
	~Console();
	void Move(int V, int H, char map[][100]);
	void MapPrint();
	void levelGen(char c);
	void GetName();
	bool isrunning = true;
	int Coins = 0;
	string name;
	int Level = 0;
	bool firstmove;
	private:
	
	
	int x = 1;
	int y = 1;
	
	
};

extern char map[100][100];

