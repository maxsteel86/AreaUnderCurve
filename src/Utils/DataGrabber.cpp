
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include "DataGrabber.hpp"
#include "DataPoint.hpp"

namespace AuC_Utils
{
	/*
	 * Instantiate a new DataGrabber instance to retrieve a collection of
	 * data points from a file.
	 * 
	 * @param fileName: name and path to file containing data.
	 */
	DataGrabber::DataGrabber(string fileName)
	{
		this->_fileName = fileName;
	} // end method
	
	/*
	 * Retrieve a collection of data points.
	 * 
	 * @returns: Collection of data points as a vector.
	 */
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
