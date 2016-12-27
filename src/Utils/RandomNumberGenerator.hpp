
#ifndef RANDOMNUMBERGENERATOR_HPP
#define RANDOMNUMBERGENERATOR_HPP

#include <random>
using namespace std;

namespace AuC_Utils
{
	class NumberGenerator
	{
		private:
			default_random_engine _generator;
			uniform_int_distribution<int> _distribution;
			
		public:
			NumberGenerator(int min, int max);
			int GetRandomNumber();
	};
} // end namespace

#endif
