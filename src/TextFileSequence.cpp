
#include <iostream>
#include <vector>
#include "Utils/DataGrabber.hpp"
#include "Utils/DataPoint.hpp"

using namespace AuC_Utils;

vector<DataPoint> TextFileSequence(char *fileName)
{
    DataGrabber dataGrabber(fileName);
    vector<DataPoint> discreteData = dataGrabber.GetDataPoints();
	
	return discreteData;
} // end method
