#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;



class Rand
{
public:
	int num;

	void Randnum();
};

void Rand::Randnum()
{
	int t = (int)time(NULL);
	int num = t %  10;
	
}

class Input 
{
public:
	void input()
	{
		 static int Ans;
		 
	     cout << "4桁の数字を入力してね" << endl;
		 cin >> Ans;
	}
};

class Chack 
{
	void chack() 
	{

	}
};



int main()
{
	Rand;
	

}


