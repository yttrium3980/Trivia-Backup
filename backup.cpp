// website backup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
//#include <unistd.h>

using namespace std;

int main()
{

	system("echo this is a test");

	char cmd[256];

	for (int ctr = 1; ctr <= 50; ctr++)
	{


		sprintf_s(cmd, "curl https://bismuth83.neocities.org/triviagame/triv%d > d:/triviabackup/triv%d.html", ctr, ctr);

		cout << "about to execute: " << cmd << endl;

		// sleep 10 seconds
		Sleep(10 * 1000);

		system(cmd);

		// sleep 10 seconds
		Sleep(10 * 1000);
	}

	//system("curl https://bismuth83.neocities.org/triviagame/triv49");
 //   curl https ://bismuth83.neocities.org/triviagame/triv50
	std::cout << "Hello World!\n";

	//curl https ://bismuth83.neocities.org/triviagame/triv50 > triv50.html
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
