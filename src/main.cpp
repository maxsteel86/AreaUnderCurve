
#include <iostream>
#include <vector>
#include "Utils/RandomNumberGenerator.hpp"
using namespace std;
using namespace AuC_Utils;

vector<int> GetRandomSequence(int dataPoints)
{
	NumberGenerator generator(1, 500);
	vector<int> discreteData;
	discreteData.reserve(dataPoints);
	
	for(int i = 0; i < dataPoints; ++i)
	{
		discreteData.push_back(generator.GetRandomNumber());
	} // end for
	
	return discreteData;
} // end method

int main(int argc, char *argv[])
{
	const int DATAPOINT_COUNT = 100;
	vector<int> discreteData = GetRandomSequence(DATAPOINT_COUNT);
	
	for(uint i = 0; i < discreteData.size(); i++)
	{
		cout << discreteData[i] << endl;
	} // end for
	
	return 0;
} // end method
