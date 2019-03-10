// CocCocCodingContest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <filesystem>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
typedef std::vector<std::string> stringvec;

void read_directory(const std::string& name)
{
	std::string pattern(name);
	pattern.append("\\*");
	WIN32_FIND_DATA data;
	HANDLE hFind;
	if ((hFind = FindFirstFile((LPCWSTR)pattern.c_str(), &data)) != INVALID_HANDLE_VALUE) {
		do {
			cout << data.cFileName << endl;
		} while (FindNextFile(hFind, &data) != 0);
		FindClose(hFind);
	}
}

int main()
{
	stringvec v;
    std::cout << "Hello World!\n"; 
	string name = "E:\\homework\\CocCocCodingContest\\rootFolder\\";
	//read_directory(name);
	string pattern = "E:\\homework\\CocCocCodingContest\\rootFolder";
	WIN32_FIND_DATA data;
	HANDLE hFind;
	hFind = FindFirstFile((LPCWSTR)pattern.c_str(), &data);
	cout << "fileName: " << *data.cFileName << endl;
	
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
