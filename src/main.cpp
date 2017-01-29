
#include <iostream>
#include <vector>
#include "Utils/RandomNumberGenerator.hpp"
#include "Utils/DataPoint.hpp"
#include "Utils/DataGrabber.hpp"

using namespace std;
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

double GetArea(vector<DataPoint> discreteData)
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

void RandomSequenceArea()
{
    const int DATAPOINT_COUNT = 100;
	vector<DataPoint> discreteData = GetRandomSequence(DATAPOINT_COUNT);
	
	double area = GetArea(discreteData);
	cout << "Area: " << area << endl;
} // end method

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		cout << "Error in usage" << endl;
        
        return 0;
	} // end if
    
    DataGrabber dataGrabber(argv[1]);
    vector<DataPoint> data = dataGrabber.GetDataPoints();
		
    double area = GetArea(data);
    cout << "Area: " << area << endl;
    
    return 0;
} // end method
