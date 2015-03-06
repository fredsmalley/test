/*!
*	A Self-Replicating Program
*
*	@author Fred A. Smalley
**/

#include <iostream>	// cout & endl
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::fstream;

int main () {
	// Instatiate a string and two file streams
	string line;
	fstream inFile;
	fstream outFile;

	// Open this file to read from
	inFile.open("replicator.cpp", fstream::in);

	if (inFile.is_open()) {

		// Open new file for output
		outFile.open("replicator(1).cpp", fstream::out);

		if (outFile.is_open()) {

			// for each line in inFile
			while(getline(inFile, line)) {

				// output line to terminal
				cout << line << endl;

				// output line to outFile
				outFile << line << endl;
			}
			outFile.close();
		}
		inFile.close();
	}
}
