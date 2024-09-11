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

