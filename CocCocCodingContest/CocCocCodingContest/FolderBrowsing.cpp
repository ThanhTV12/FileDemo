#include "pch.h"
#include "FolderBrowsing.h"
#include <filesystem>



FolderBrowsing::FolderBrowsing()
{
}

FolderBrowsing::FolderBrowsing(string rootFolderPath)
{
	this->rootFolderPath = rootFolderPath;
}


//FolderBrowsing::~FolderBrowsing()
//{
//}

list<string> FolderBrowsing::searchFilesContainingWords(const string words[])
{
	queue<Folder> vistedFolders;
	string currentPath = this->rootFolderPath;



	return list<string>();
}
