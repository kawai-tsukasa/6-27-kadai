#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;
 
class randNum 
{
public:
	int answer;
	void Rand();
	
};

void randNum::Rand()
{
	
	for (int i = 0; i < 4; i++)
	{
		int ran;
		ran = rand() % 10;
		printf("%d\n", ran);
	}
	
}

class anser 
{

};



int main()
{
	randNum Rand();
}
