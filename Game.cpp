/*****************************************************
 * Final Project: Maze Game
 * Programmer: Logan Morro
 * Due Date: 4/30/2020
 * 
 * EGRE 491, Spring 2020		Instructor: Robert Klenke
 * 
 * Pledge: I have neither give nore recieved unautthorized aid on this program.
 * 
 * Description: This is my implementation file for my "Console" class. here is where I define what the
 * 				functions and variables do.
 * 
 * output: there is not output for any of these functions. cout is called in alot of the functions.
 * 
 ********************************************/
#include  "GameClass.h"
//#include "Buffer.h"




//maps 1-5 are ASCii generated maps
char map[100][100] = {
	"=====================                                  ",
	"|@                  |                                  ",
	"|                   ==================                 ",
	"|                                   C|                 ",
	"|                   ==============   |    ===========  ",
	"|              C    |            |   |    |         O  ",
	"|                   |            |   |    |   =======  ",
	"|                   |            |   |    |   |        ",
	"|                   |            |   |    |   |        ",
	"|                   |            |   |    |   |        ",
	"|        C          |            |   ======   |        ",
	"|                   |            |            |        ",
	"=====================            ==============        " };
char map2[100][100] = {
	"               |===========|==|               ",
	"          |=|==|===========|C |=|==|          ",
	"     |==|=| |              |    |  |====|     ",
	"|====|CC|   | |=|========| |    |       |====|",
	"|@|  |  |   | |=|        | |==| |=====| |C   |",
	"| |==|  |===| |=| |====| |                   |",
	"|             |=| |=== | |======|============|",
	"|===| |=|===| |=|      |                     |",
	"|   | |C|       | |==| |===========|=======| |",
	"|===| | |=|  C  | |C               |====|==| |",
	"|     |   |===|C| |====| |==|===|       |==| |",
	"| |===|=|     |=| |=|  | |==|      |==| |==|C|",
	"|       |===|       |==| |==| |====|C   |==| |",
	"|====|      |====|       |==|C|    |C   |==| |",
	"     |====|      |=====| |==|=|    |====|  | |",
	"          |====|              |====|       | |",
	"               |==============|            |O|",};
	
char map3[100][100] = {
	
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa O a",
	"8 C 8               8               8           8                   8   8",
	"8   8   aaaaaaaaa   8   aaaaa   aaaa8aaaa   aaaa8   aaaaa   aaaaa   8   8",
	"8               8       8   8           8           8   8   8       8   8",
	"8aaaaaaaa   a   8aaaaaaa8   8aaaaaaaa   8aaaa   a   8   8   8aaaaaaa8   8",
	"8       8   8               8           8   8   8   8   8           8 C 8", 
	"8   a   8aaa8aaaaaaaa   a   8   aaaaaaaa8   8aaa8   8   8aaaaaaaa   8   8",
	"8   8               8   8   8       8           8           8       8   8",
	"8   8aaaaaaaaaaaa   8aaa8   8aaaa   8   aaaaa   8aaaaaaaa   8   aaaa8   8",
	"8           8       8 C 8       8   8       8           8   8           8",
	"8   aaaaa   8aaaa   8   8aaaa   8   8aaaaaaa8   a   a   8   8aaaaaaaaaaa8",
	"8       8       8   8   8       8       8       8   8   8       8       8",
	"8aaaaaaa8aaaa   8   8   8   aaaa8aaaa   8   aaaa8   8   8aaaa   8aaaa   8",
	"8           8   8           8       8   8       8   8       8           8",
	"8   aaaaa   8   8aaaaaaaa   8aaaa   8   8aaaa   8aaa8   aaaa8aaaaaaaa   8",
	"8   8       8           8           8       8   8   8               8   8",
	"8   8   aaaa8aaaa   a   8aaaa   aaaa8aaaa   8   8   8aaaaaaaaaaaa   8   8",
	"8   8           8   8   8   8   8           8               8   8       8",
	"8   8aaaaaaaa   8   8   8   8aaa8   8aaaaaaa8   aaaaaaaaa   8   8aaaaaaa8",
	"8   8     C 8   8   8           8           8   8       8               8",
    "8   8   aaaa8   8aaa8   aaaaa   8aaaaaaaa   8aaa8   a   8aaaaaaa8   8   8",
	"8   8                   8           8 C             8               8   8",
	"8 @ 8aaaaaaaaaaaaaaaaaaa8aaaaaaaaaaa8aaaaaaaaaaaaaaa8aaaaaaaaaaaaaaa8aaa8",};

char map4 [100][100] = {
	
	".--.--.--.--.--.--.",
	"|   C |        |OO|",
	":  :--:  :  :  :  :",
	"|  |     |C |  C  |",
	":  :  :  :--:--:--:",
	"|  |  |           |",
	":  :  :--:--:--:  :",
	"|  |        |C |  |",
	":  :--:--:  :  :  :",
	"|     |C    |  |  |",
	":--:  :--:--:  :  :",
	"|        |        |",
	":  :--:--:--:--:  :",
	"|    C|        |  |",
	":  :--:  :  :  :  :",
	"|  |     |  |     |",
	":  :  :  :--:--:--:",
	"|  |  |           |",
	":  :  :--:--:--:  :",
	"|  |        |  |  |",
	":  :--:--:  :  :  :",
	"|     |     |  |  |",
	":--:  :  :--:  :  :",
	"|        |C       |",
	":@ :--:--:--:--:--:", };
	
char map5 [100][100] = {
	":--:--:--:--:--:--:--:--:--:--:--:--:--:--:--:",  
	"|              |                             |",  
	":  :--:--:--:  :--:--:--:--:  :--:--:  :--:  :",  
	"|           |                 |C       |C    |",  
	":  :--:--:  :--:--:--:--:  :--:--:--:--:--:--:",  
	"|  |     |  |           |  |                 |",
	":  :  :  :  :  :  :--:  :  :  :--:--:--:--:  :",  
	"|  |  |C |  |  |  |C    |  |  |  |C       |  |",  
	":  :  :--:  :  :--:--:--:  :  :  :--:  :  :  :",  
	"|  |     |  |              |           |  |  |",  
	":  :--:  :  :--:--:--:--:--:  :--:--:--:--:  :",  
	"|     |  |      C             |              |",  
	":--:  :  :--:--:--:--:--:--:--:  :--:--:--:  :", 
	"|C |  |        C           |     |     |  |  |",  
	":  :  :--:  :--:--:--:--:  :  :--:  :  :  :  :",  
	"|  |  |     |     |     |  |  |     |     |  |",  
	":  :  :  :--:--:  :--:  :  :  :  :--:--:--:  :",  
	"|     |  |              |  |  |              |",  
	":--:  :  :  :--:--:--:  :  :  :  :--:--:--:--:",  
	"|CC|  |  |  |  | O   |  |  |  |  |           |",  
	":  :  :  :  :  :--:  :  :  :  : C:  :--:--:  :",  
	"|  |  |  |  |      C |  |  |  |  |  |     |  |",  
	":  :  :  :  :  :--:--:  :  :  :  :  :  :  :  :",  
	"|  |  |  |  |           |  |  |  |  | C|  |  |",  
	":  :  :  :  :--:--:--:--:  :  :C :  :--:  :  :",  
	"|     |  |                 |  |  |        |  |",  
	":  :--:  :  :--:--:--:--:--:  :  :--:--:  :  :",  
	"|  |     |  |        |        |     |    C|  |",  
	":  :--:  :  :--:--:  :  :--:--:--:  :--:--:  :",  
	"|        |           |  |                    |",  
	":--:--:--:--:--:--:--: @:--:--:--:--:--:--:--:", };

//Console::Console()
//Summary of Console::Console:
//
//	This is my default constructor, not much to say here.
// 
//Reutrn valuue : Nothing
//

Console::Console()
{
}

//Console::~Console()
//Summary of Console::Console:
//
//	This is my destructor, not much to say here.
// 
//Reutrn valuue : Nothing
//
Console::~Console()
{
}
// void Console::GetName()
//
//Summary of this function:
//
//		This function takes in user input to assign our variable "name"
// 		to a string.
//
//Parameters : none
//
//Return value: Nothing, just assigns input to name;
//
void Console::GetName()
{
	cout<<"Enter Your Name: ";
	cin>>this->name;
}

// void Console::levelGen(char input)
//
//Summary of this function:
//
//		This function is used to move our player around our 5 different maps
//		it uses the keys "W,A,S,D" to move our player up,left,right, or down
//
//Parameters : a char, only chars with a value of w,a,s,d,p,and o will register
//
//Return value: Nothing, just assigns our player a new position based on our parameter.
//
//Description:
//
//		This function utilized the getchar() function and calles our move function.

void Console::levelGen(char input)
{
	if(this->Level == 0)
	{
		if(input == 'w')
			Move(-1, 0, map);
		if(input == 's')
			Move(1, 0, map);
		if(input == 'd')
			Move(0, 1, map);
		if(input == 'a')
			Move(0, -1, map);
		
	}
	if(this->Level == 1)
	{
		if(input == 'w')
			Move(-1, 0, map2);
		if(input == 's')
			Move(1, 0, map2);
		if(input == 'd')
			Move(0, 1, map2);
		if(input == 'a')
			Move(0, -1, map2);
	}
	if(this->Level == 2)
	{
		if(input == 'w')
			Move(-1, 0, map3);
		if(input == 's')
			Move(1, 0, map3);
		if(input == 'd')
			Move(0, 1, map3);
		if(input == 'a')
			Move(0, -1, map3);
	}
	if(this->Level == 3)
	{
		if(input == 'w')
			Move(-1, 0, map4);
		if(input == 's')
			Move(1, 0, map4);
		if(input == 'd')
			Move(0, 1, map4);
		if(input == 'a')
			Move(0, -1, map4);
	}
	if(this->Level == 4)
	{
		if(input == 'w')
			Move(-1, 0, map5);
		if(input == 's')
			Move(1, 0, map5);
		if(input == 'd')
			Move(0, 1, map5);
		if(input == 'a')
			Move(0, -1, map5);
	}
	if(this->Level == 5)
	{
		this->isrunning = false;
	}
}

// void Console::MapPrint
//
//Summary of this function:
//
//		This function prints out our 5 different maps, and our coin/level count.
//
//Parameters : None;
//
//Return value: Nothing, just prints out the current map we are on based on our level.
//
//
void Console::MapPrint()
{
	if(this->Level == 0)
	{
		for(int i = 0; i<13; i++)
		{
			cout << "\r" <<map[i]<<endl;
		}
		cout<< "Coins: " << this->Coins << " Level: " << this->Level << endl;
	}
	if(this->Level == 1)
	{ 
		if(this->firstmove)
		{
			this->x = 1;
			this->y = 4;
			this->firstmove = false;
		}
		for(int i = 0; i<18; i++)
		{
			cout << "\r" <<map2[i]<<endl;
		}
		cout<< "Coins: " << this->Coins << " Level: " << this->Level << endl;
	}
	if(this->Level == 2)
	{
		if(this->firstmove)
		{
			this->x = 2;
			this->y = 22;
			this->firstmove = false;
		}
		for(int i = 0; i<25; i++)
		{
			cout << "\r" <<map3[i]<<endl;
		}
		cout<< "Coins: " << this->Coins << " Level: " << this->Level << endl;
	}
	if(this->Level == 3)
	{
		if(this->firstmove)
		{
			this->x = 1;
			this->y = 24;
			this->firstmove = false;
		}
		for(int i = 0; i<27; i++)
		{
			cout << "\r" <<map4[i]<<endl;
		}
		cout<< "Coins: " << this->Coins << " Level: " << this->Level << endl;
	}
	if(this->Level == 4)
	{
		if(this->firstmove)
		{
			this->x = 23;
			this->y = 30;
			this->firstmove = false;
		}
		for(int i = 0; i<32; i++)
		{
			cout << "\r" <<map5[i]<<endl;
		}
		cout<< "Coins: " << this->Coins << " Level: " << this->Level << endl;
	}
	

}

// void Console::Move(int V, int H, char map[100][100]
//
//Summary of this function:
//
//		This function moves our player "@" around our map, making sure that it doesnt
//		collied with our map walls. we also keep track of our coins, and levels here.
// 		A coin is defined as the char "C" and the end of the level is defined as "O".
//
//Parameters : we pass to ints into this function that correspond with the direction we will move.
//				V for vertical and H for horizontal, either a -1, 1, or 0 is passed, which will
//				move our charater either one block up, left ,down, or right. We also pass a
//				2 dimensional char array that represents our current map. we need the map in this
// 				function to make sure we know where we are.
//
//Return value: Nothing, just gives our player his new cordinates.
//

void Console::Move(int V, int H, char map[100][100])
{
	int y2 = this->y + V;
	int x2 = this->x + H;
	
	if(map[y][x2] == ' ')
	{
		map[y][x] = ' ';
		this->x += H;
		map[y][x] = '@';
	}
	if(map[y2][x] == ' ')
	{
		map[y][x] = ' ';
		this->y += V;
		map[y][x] = '@';
	}
	//////////////////////////
	if(map[y][x2] == 'C')
	{
		map[y][x] = ' ';
		this->x += H;
		map[y][x] = '@';
		Coins++;
	}
	if(map[y2][x] == 'C')
	{
		map[y][x] = ' ';
		this->y += V;
		map[y][x] = '@';
		Coins++;
	}
	if(map[y][x2] == 'O')
	{
		map[y][x] = ' ';
		this->x += H;
		map[y][x] = '@';
		Level++;
		this->firstmove = true;
	}
	if(map[y2][x] == 'O')
	{
		map[y][x] = ' ';
		this->y += V;
		map[y][x] = '@';
		Level++;
		this->firstmove = true;
	}
	
}

