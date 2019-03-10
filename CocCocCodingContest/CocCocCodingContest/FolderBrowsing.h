#pragma once
#include <string>
#include <list>
#include <queue>
#include "Folder.h"

using namespace std;
class FolderBrowsing
{
public:
	FolderBrowsing();
	FolderBrowsing(string rootFolderPath);
	~FolderBrowsing() = default;

	/* this method using breadth first search(BFS) algorithm*/
	list<string> searchFilesContainingWords(const string words[]);

private: 
	string rootFolderPath;
};

