#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <cstdlib>


using namespace std;

int print(string stringg);
bool willLoop = true;
void printBoard(char TTTSpot[]);
void playerInput(char* TTTSpot, int TTTChoice);
void cpuInput(char* TTTSpot);

//The main GOAT
int main()
{
	int TTTChoice=0;
	//Start da game boi
	char TTTSpot[9] = { '1','2','3','4','5','6','7','8','9' };

	srand(static_cast<unsigned int>(time(0)));

	//Introduction spoken by the GOAT
	system("color 2");
	print("Yo, welcome to your classic tic tac toe. Y'know ya boy AI here breaking ankles.");
	print("Bet I won't lose to your fleshy human dumbass brain.");
	print("My processors are WAY faster.");
	print("You get X's and I get O's");
	print("Aight, let ya boy set up da board.");
	cout << endl;

	//Rounds
	int Round = 0;
	do
	{
		printBoard(TTTSpot);
		Round++;
		cout << "Round " << Round << "!" << endl;
		cout << "What is your move? Pathetic, puny, weakling..." << endl;
		playerInput(TTTSpot, TTTChoice);
		system("cls");
		printBoard(TTTSpot);
		print("Aight bet, lemme choose...");
		Sleep(2000);
		system("cls");
		cpuInput(TTTSpot);
	} while (true);

	

		return(0);
}

//Couts the board
void printBoard(char TTTSpot[])
{

	//array for da board les goooooooo
	cout << "       |       |      " << endl;
	cout << "   " << TTTSpot[0] << "   |   " << TTTSpot[1] << "   |   " << TTTSpot[2] << endl;
	cout << "       |       |      " << endl;
	cout << "-------+-------+------" << endl;
	cout << "       |       |      " << endl;
	cout << "   " << TTTSpot[3] << "   |   " << TTTSpot[4] << "   |   " << TTTSpot[5] << endl;
	cout << "       |       |      " << endl;
	cout << "-------+-------+------" << endl;
	cout << "       |       |      " << endl;
	cout << "   " << TTTSpot[6] << "   |   " << TTTSpot[7] << "   |   " << TTTSpot[8] << endl;
	cout << "       |       |      " << endl;
	cout << endl;

}

//Lets the player enter an input
void playerInput(char* TTTSpot, int TTTChoice)
{
	//What is the user's choice?
	do
	{
		while ((!(cin >> TTTChoice) || (TTTChoice < 0) || (TTTChoice > 9)))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "That is a trashy input. For the love of god.\n";
		}
		if (TTTChoice == 1 && TTTSpot[0] == '1')
		{
			TTTSpot[0] = 'X';
			willLoop = false; 
		}
		else if (TTTChoice == 2 && TTTSpot[1] == '2')
		{
			TTTSpot[1] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 3 && TTTSpot[2] == '3')
		{
			TTTSpot[2] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 4 && TTTSpot[3] == '4')
		{
			TTTSpot[3] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 5 && TTTSpot[4] == '5')
		{
			TTTSpot[4] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 6 && TTTSpot[5] == '6')
		{
			TTTSpot[5] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 7 && TTTSpot[6] == '7')
		{
			TTTSpot[6] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 8 && TTTSpot[7] == '8')
		{
			TTTSpot[7] = 'X';
			willLoop = false;
		}
		else if (TTTChoice == 9 && TTTSpot[8] == '9')
		{
			TTTSpot[8] = 'X';
			willLoop = false;
		}
		else
		{
			cout << "BOI, THAT SPOT IT TAKEN!!! YOU-" << endl;
		}
	} while (willLoop);
}

//Function that "types" out the cout
int print(string stringg)
{
	string stringRange = stringg;
	for (char characterHolder : stringRange)
	{
		cout << characterHolder;
		Sleep(10);
	}
	cout << endl;
	return 0;
}

//Where all the jumbles mess of the if and else if statements start uugugggghhghghgh
void cpuInput(char* TTTSpot)
{
	int cpuMove = 0;
	bool noMove = true;

	while (noMove)
	{
		cpuMove = rand() % 9; //Anything between 0 and 8, matches with array index values

		if (TTTSpot[cpuMove] == '1')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '2')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '3')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '4')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '5')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '6')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '7')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '8')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
		else if (TTTSpot[cpuMove] == '9')
		{
			TTTSpot[cpuMove] = 'O';
			noMove = false;
		}
	}
		
}