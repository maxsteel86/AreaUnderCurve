
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include "DataGrabber.hpp"
#include "DataPoint.hpp"

namespace AuC_Utils
{
	DataGrabber::DataGrabber(string fileName)
	{
		this->_fileName = fileName;
	} // end method
	
	vector<DataPoint> DataGrabber::GetDataPoints()
	{
		ifstream inputFile(this->_fileName);
		vector<DataPoint> dataPoints;
		
		string line;
		while(getline(inputFile, line))
		{
			stringstream inputStringStream(line);
			
			double x, y;
			inputStringStream >> x;
			
			while(inputStringStream.peek() == ',' || inputStringStream.peek() == ' ')
			{
				inputStringStream.ignore();
			}
			
			inputStringStream >> y;
			
			dataPoints.push_back(DataPoint(x, y));
		} // end while
		
		return dataPoints;
	} // end method
} // end namespace
