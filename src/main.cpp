
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

vector<int> GetRandomSequence(int dataPoints)
{
	vector<int> discreteData;
	discreteData.reserve(dataPoints);
	
	uint seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator(seed);

	uniform_int_distribution<int> distribution(1, 500);
	
	for(int i = 0; i < dataPoints; ++i)
	{
		discreteData.push_back(distribution(generator));
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
