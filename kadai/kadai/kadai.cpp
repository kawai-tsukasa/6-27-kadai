#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Rand
{
public:
	void randNam(int a, int b, int c, int d);

};

void Rand::randNam(int a, int b, int c, int d) 
{
	cout << a << b << c << d << endl;
}

class Input 
{
public:
	void input()
	{
		 static int Ansinput;
		 
	     cout << "4桁の数字を入力してね" << endl;
		 cin >> Ansinput;
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
	int i = (int)time(NULL);
	int a = i % 10;
	int b = i % 10;
	int c = i % 10;
	int d = i % 10;

	Rand();

	Input();
	return 0;
}


