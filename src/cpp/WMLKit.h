#pragma once

#include "includes.h"
#include "Utils.h"

struct FileInfo {
    string prePath;
    string postPath;
};

class WMLKit {
private:
	void addFile(FileInfo i);
	string removeVersionNumber(string originPath);
public:
	bool visualizing = true;
	vector<FileInfo> fileList;
	void readFileList(string filemapPath);
	void mountCustomMods();
	void mountDuoWanMods();
	
};