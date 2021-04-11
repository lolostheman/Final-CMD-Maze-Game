/*****************************************************
 * Final Project: Maze Game
 * Programmer: Logan Morro
 * Due Date: 4/30/2020
 * 
 * EGRE 491, Spring 2020		Instructor: Robert Klenke
 * 
 * Pledge: I have neither give nore recieved unautthorized aid on this program.
 * 
 * Description: This is my main file, it is where the functions are executed
 * 
 * output: there isnt any output for this file, accept some cout and a return 0 if we wish to 
 * 			terminate the code.
 * 
 ********************************************/

#include "GameClass.h"
//#include "Buffer.h"
#include <chrono>
#include <string>

using namespace std::chrono;


Console console;


int main()
{	
	console.GetName();
	
	auto start = high_resolution_clock::now(); //this is declaring start as a inital clock using the chrono library
	while(console.isrunning)//this while loop executes the game forever untill the game is beat or "P" is pressed
	{	
		
		console.MapPrint();
		system("stty raw");
		char input = getchar();
		system("stty cooked");
		if(system("CLS")) system("clear");
		if(input == 'p')
		{
			console.isrunning = false;
			return 0;
		}
		if(input == 'o')
		{
			console.Level++;
			console.firstmove = true;
		}
		console.levelGen(input);
		
	}
	
	auto stop = high_resolution_clock::now();//this declares stop as the end clock using chrono library
	auto duration = duration_cast<seconds>(stop - start);//this declares duration as the difference clock between stop and start
														 //to be able to see how long the game was running for.
	string docu;
	cout<<"Congratulations, you have beat the Maze Game!" <<endl;
	cout<< "Your time is " << duration.count() << " seconds and you have a coin amount of " << console.Coins << endl;
	cout<< "Would you like to save your score to a text document? (yes or no): ";
	cin >> docu;
	if(docu == "yes")
	{
		string file = console.name+".txt";
		ofstream out;
		out.open(file);
		out << "Your time is " << duration.count() << " seconds and you have a coin amount of " << console.Coins << endl;
		cout << "your file is saved to this directory and is called: " << file << " . Thanks for playing!" <<endl;
	}
	else{
		cout<< "Thanks for playing!" << endl;
	}
	
	

	
	

	
}
