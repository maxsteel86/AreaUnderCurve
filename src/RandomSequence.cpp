
#include <iostream>
#include <vector>
#include "Utils/DataPoint.hpp"
#include "Utils/RandomNumberGenerator.hpp"

using namespace AuC_Utils;

vector<DataPoint> GetRandomSequence(int dataPoints)
{
	NumberGenerator generator(1, 500);
	vector<DataPoint> discreteData;
	discreteData.reserve(dataPoints);
	
	for(int i = 0; i <= dataPoints; ++i)
	{
		discreteData.push_back(DataPoint(i, generator.GetRandomNumber()));
		//discreteData.push_back(DataPoint(i, i*i + i + 3));
	} // end for
	
	return discreteData;
} // end method
