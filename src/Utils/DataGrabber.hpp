
#ifndef DATAGRABBER_H
#define DATAGRABBER_H

#include <vector>
#include <string>
#include "DataPoint.hpp"
using namespace std;

namespace AuC_Utils
{
	class DataGrabber
	{
		private:
			string _fileName;
		public:
			DataGrabber(string fileName);
			vector<DataPoint> GetDataPoints();
	}; // end class
} // end namespace
#endif
