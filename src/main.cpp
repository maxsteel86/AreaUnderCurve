
#include <iostream>
#include <vector>
#include "AreaCalculator.hpp"
#include "Utils/DataPoint.hpp"

using namespace std;
using namespace AuC;
using namespace AuC_Utils;

int main(int argc, char *argv[])
{
	AreaCalculator calculator;
	if(argc == 1)
	{
		cout << "Running Random Sequence" << endl;
        
        const int DATA_POINTS = 100;
        cout << "Area: " << calculator.GetAreaForRandomSequence(DATA_POINTS) << endl;
        
        return 0;
	} // end if
    
    cout << "Area: " << calculator.GetAreaForInputSequence(argv[1]) << endl;
    
    return 0;
} // end method
