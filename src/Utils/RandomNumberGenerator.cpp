
#include <chrono>
#include <random>
#include "RandomNumberGenerator.hpp"
using namespace std;

namespace AuC_Utils
{
	default_random_engine getRandomEngine()
	{
		uint seed = chrono::system_clock::now().time_since_epoch().count();
		
		return default_random_engine(seed);
	} // end method
	
	uniform_int_distribution<int> getDistribution(int min, int max)
	{
		return uniform_int_distribution<int>(min, max);
	} // end method
	
	NumberGenerator::NumberGenerator(int min, int max)
	{
		NumberGenerator::_generator = getRandomEngine();
		NumberGenerator::_distribution = getDistribution(min, max);
	} // end method
	
	int NumberGenerator::GetRandomNumber()
	{
		return NumberGenerator::_distribution(NumberGenerator::_generator);
	} // end method
	
} // end namespace
