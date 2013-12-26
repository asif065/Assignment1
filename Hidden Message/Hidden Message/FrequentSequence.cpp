#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string line;
	inputFile.open("input.txt");
	char givenString[1000];
	int sizeOfString;
	char givenNumber[2];
	int length;
	
	if(inputFile.is_open())
	{
		//while(getline(inputFile, line))
		//{
			//cout << line << endl;
		getline(inputFile, line);
		strncpy (givenString, line.c_str(), sizeof(givenString));
		sizeOfString = line.size();
		getline(inputFile, line);
		strncpy (givenNumber, line.c_str(), sizeof(givenNumber));
		//}
	}
	

	inputFile.close();

	/*for(int loopCounter = 0; loopCounter < 1000; loopCounter++)
	{
		if(givenString[loopCounter] == '\0')
			break;
		cout << givenString[loopCounter];
	}
	cout << endl;
	for(int loopCounter = 0; loopCounter < 2; loopCounter++)
	{
		if(givenNumber[loopCounter] == '\0')
			break;
		cout << givenNumber[loopCounter];
	}
	cout << endl;*/

	length = atoi(givenNumber);

	/*cout << sizeOfString << endl;
	cout << givenString[sizeOfString-1] << endl;*/


	return 0;
}