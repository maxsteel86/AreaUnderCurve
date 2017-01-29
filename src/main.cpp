
#include <iostream>
#include <vector>
#include "Utils/DataPoint.hpp"

using namespace std;
using namespace AuC_Utils;

extern vector<DataPoint> GetRandomSequence(int dataPoints);
extern vector<DataPoint> TextFileSequence(char *fileName);

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

void PrintArea(vector<DataPoint> dataSequence)
{
    cout << "Area: " << GetArea(randomSequence) << endl;
} // end method

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		cout << "Running Random Sequence" << endl;
        
        const int DATA_POINTS = 100;
        PrintArea(GetRandomSequence(DATA_POINTS));
        
        return 0;
	} // end if
    
    PrintArea(TextFileSequence(argv[1]));
    
    return 0;
} // end method
