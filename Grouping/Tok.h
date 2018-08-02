#include <string>
#include <list>
#include <iostream>
#include <string.h>

using namespace std;

class Tok
{
private:
	string str;
	list<string> data;
public:
	Tok(string _str)
	{
		this->str = "asdlfkhkasjdf";		// 복사가 제대로 안된 것 같다.
	}
	list<string> split(const char *delimeter);
};