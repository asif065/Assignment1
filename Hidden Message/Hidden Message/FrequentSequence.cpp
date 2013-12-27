#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int Count( const std::string & str, const std::string & obj );
int main()
{
	ifstream inputFile;
	string givenString;
	string number;
	string key;
	string tempKey;
	string result;
	inputFile.open("input.txt");
	//inputFile.open("sample.txt");
	int sizeOfString;
	char givenNumber[2];
	int length;
	int numberOfSequence;
	int numbersOfOccurance;
	int n = 0;
	
	if(inputFile.is_open())
	{
		//while(getline(inputFile, givenString))
		//{
			//cout << givenString << endl;
		getline(inputFile, givenString);
		//strncpy (givenString, givenString.c_str(), sizeof(givenString));
		sizeOfString = givenString.size();
		getline(inputFile, number);
		strncpy (givenNumber, number.c_str(), sizeof(givenNumber));
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
	
	numberOfSequence = (sizeOfString - length) + 1;
	
	for(int loopCounter = 0; loopCounter < numberOfSequence ; loopCounter++)
	{
		tempKey = givenString.substr(loopCounter, length);
		if(key.empty())
		{
			key = tempKey;
		}
		else
		{
			int i = Count(tempKey, result);
			if( i <= 0)
			{	
				key = tempKey;
			}
			else
			{
				//cout << "match" << endl;
				continue;
			}
		}
		numbersOfOccurance = Count( key, givenString );

		if(n == 0)
		{
			n = numbersOfOccurance;
			result = key;
		}
		else
		{
			if(n < numbersOfOccurance)
			{
				n = numbersOfOccurance;
				result = key;
			}
			else
			{
				if(n == numbersOfOccurance)
				{
					result.append(" ");
					result.append(key);
				}
			}
		}
	}
	
	cout << result << endl;
	//givenString.resize(length);
	//cout << givenString;
	return 0;
}

int Count( const std::string & str, 
           const std::string & obj ) {
    int n = 0;
    std::string ::size_type pos = 0;
    while( (pos = obj.find( str, pos )) 
                 != std::string::npos ) {
    	n++;
    	pos += str.size();
    }
    return n;
}