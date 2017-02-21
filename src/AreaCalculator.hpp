
#include <string>
#include <vector>
#include "Utils/DataPoint.hpp"

using namespace std;
using namespace AuC_Utils;

namespace AuC
{
	class AreaCalculator
	{
		private:
			vector<DataPoint> GetRandomSequence(int dataPoints);
			vector<DataPoint> TextFileSequence(string fileName);
			
			double GetArea(vector<DataPoint> discreteData);
		public:
			double GetAreaForRandomSequence(double dataPoints);
			double GetAreaForInputSequence(string inputFile);
	}; // end namespace
} // end namespace
