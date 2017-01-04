
#include <chrono>
#include <random>
#include "RandomNumberGenerator.hpp"
using namespace std;

namespace AuC_Utils
{
	NumberGenerator::NumberGenerator(int min, int max)
	{
		uint seed = chrono::system_clock::now().time_since_epoch().count();
		
		NumberGenerator::_generator = default_random_engine(seed);
		NumberGenerator::_distribution = uniform_int_distribution<int>(min, max);
	} // end method
	
	int NumberGenerator::GetRandomNumber()
	{
		return NumberGenerator::_distribution(NumberGenerator::_generator);
	} // end method
	
} // end namespace
