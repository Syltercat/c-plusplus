#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream output;
	
	output.open("test.txt");

	output << "Hello GitHub !!!" << endl;
	output.close();

	return 0;
}