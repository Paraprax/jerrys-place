#include <iostream>
#include <string>

using namespace std;

void KnockKnock();
void HelloJerry();
bool IsItNewman();
void RollCredits();
void NewmanBye();

int main()
{
	bool bIsNewman = true;

	do {
		KnockKnock();
		HelloJerry(); //user is greeted
		bIsNewman = IsItNewman(); //user greets their visitor
		cout << endl;
	} while (bIsNewman == false);

	NewmanBye();
	RollCredits();

	return 0; //exit the application

}

void KnockKnock()
{
	cout << "A KNOCK AT THE DOOR. . . .\n";
	cout << endl;
}

void HelloJerry()
{
	cout << "VISITOR: Hello, Jerry!\n";
	cout << endl;
}


bool IsItNewman()
{
	cout << "(say hello to your visitor): ";

	string Greeting = "";
	getline(cin, Greeting);

	return (Greeting[7] == 'N') || (Greeting[7] == 'n');

}

void NewmanBye()
{
	cout << "NEWMAN: Well, ta-ta for now!\n";
}

void RollCredits()
{
	cout << endl;
	cout << "EXECUTIVE PRODUCERS\n";
	cout << "  GEORGE SHAPIRO\n";
	cout << "   HOWARD WEST\n";
	cout << endl;
}
