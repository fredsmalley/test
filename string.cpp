#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	string line = "Hello, World";

	cout << endl << endl;
	cout << "line.susbtr(line.find(\"H\")) = " << line.substr(line.find("H")) << endl; 
	cout << "line.substr(line.find(\"H\") + 1) = " << line.substr(line.find("H") + 1) << endl;
	cout << "line.substr(0, line.find(\",\")) = " << line.substr(0, line.find(",")) << endl;
	if (line.find("a") == line.npos)
		cout << "The line does not contain an \"a\"" << endl;
	else
		cout << "The line contains an \"a\"" << endl;
	cout << endl;

	if (1)
		cout << "1 = true" << endl;
	else
		cout << "1 = false" << endl;

	string test = "";
	cout << "\"\".length() = " << test.length() << endl;
}
