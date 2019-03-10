#pragma once
#include <string>
using namespace std;

class Folder
{
public:
	Folder(string name, string path);
	~Folder();

private:
	string name;
	string path;
};

