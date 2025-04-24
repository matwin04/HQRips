#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "HELLO WORLD\n";
	cout << "READING DVD..." << endl;
	string dvdPath = "/dev/sr0";
	ifstream dvdFile(dvdPath,ios::binary);
	if (!dvdFile.is_open()) {
		cerr << "ERROR OPENING DVD drive. " << endl;
	}
	// Read DVD Structure
	// Read VOB data
	// Encode Video data using FFMPEG
	// Write Encoded Data To File
	
	dvdFile.close();
	return 0;
}