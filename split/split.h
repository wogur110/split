#include <string>
#include <vector>
#include <iostream>
#include <string.h>


using namespace std;

char *str_tok(char *str, const char delimiter);

vector<string> split(string *str, const char delimiter);

/*
class string_tok :public string
{
public:
	string_tok(string str)
	{
		this->string = str->string;
	}
	vector<string> split(const char *delimiter);
};
*/