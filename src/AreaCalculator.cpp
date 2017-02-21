
#include <string>
#include <vector>
#include "AreaCalculator.hpp"
#include "Utils/DataGrabber.hpp"
#include "Utils/DataPoint.hpp"
#include "Utils/RandomNumberGenerator.hpp"

using namespace std;
using namespace AuC_Utils;

namespace AuC
{
	double AreaCalculator::GetAreaForRandomSequence(double dataPoints)
	{
		vector<DataPoint> randomSequence = GetRandomSequence(dataPoints);
		return GetArea(randomSequence);
	} // end method
	
	double AreaCalculator::GetAreaForInputSequence(string inputFile)
	{
		vector<DataPoint> inputSequence = TextFileSequence(inputFile);
		return GetArea(inputSequence);
	} // end method
	
	double AreaCalculator::GetArea(vector<DataPoint> discreteData)
	{
		int dataSize = discreteData.size();
		
		double sum = discreteData[0].Y + discreteData[dataSize - 1].Y;
		for(int i = 1; i < dataSize - 1; i++)
		{
			sum += discreteData[i].Y * 2;
		} // end for
		
		double multiple = ((double)(discreteData[dataSize - 1].X - discreteData[0].X)) / ((double)(dataSize - 1) * 2.0);
		
		return sum * multiple;
	} // end method
	
	vector<DataPoint> AreaCalculator::GetRandomSequence(int dataPoints)
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
	
	vector<DataPoint> AreaCalculator::TextFileSequence(string fileName)
	{
		DataGrabber dataGrabber(fileName);
		vector<DataPoint> discreteData = dataGrabber.GetDataPoints();
		
		return discreteData;
	} // end method
} // end namespace
