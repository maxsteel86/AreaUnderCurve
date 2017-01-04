
#include <iostream>
#include <vector>
#include "Utils/RandomNumberGenerator.hpp"
#include "Utils/DataPoint.hpp"
using namespace std;
using namespace AuC_Utils;

vector<DataPoint> GetRandomSequence(int dataPoints)
{
	NumberGenerator generator(1, 500);
	vector<DataPoint> discreteData;
	discreteData.reserve(dataPoints);
	
	for(int i = 0; i <= dataPoints; ++i)
	{
		//discreteData.push_back(DataPoint(i, generator.GetRandomNumber()));
		discreteData.push_back(DataPoint(i, i*i + i + 3));
	} // end for
	
	return discreteData;
} // end method

int main(int argc, char *argv[])
{
	const int DATAPOINT_COUNT = 100;
	vector<DataPoint> discreteData = GetRandomSequence(DATAPOINT_COUNT);
	
	int sum = discreteData[0].Y + discreteData[discreteData.size() - 1].Y;
	for(uint i = 1; i < discreteData.size() - 1; i++)
	{
		//cout << discreteData[i].X << ", " << discreteData[i].Y << endl;
		sum += discreteData[i].Y * 2;
	} // end for
	double multiple = ((double)(discreteData[discreteData.size() - 1].X - discreteData[0].X)) / ((double)(discreteData.size() - 1) * 2.0);
	
	cout << discreteData[discreteData.size() - 1].X << " " << discreteData[0].X << endl;
	cout << discreteData.size() << endl;
	cout << "Area: " << (double)sum * multiple << endl;
	
	return 0;
} // end method
