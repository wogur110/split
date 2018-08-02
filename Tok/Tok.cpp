#include "Tok.h"

list<string> Tok::split(const char *delimeter)
{
	cout << this->str.length() << endl;
	char *copy = new char[str.length()+1];
	strncpy(copy, str.data(), str.length());
	char *token;
	token = strtok(copy, delimeter);
	while(token)
	{
		data.push_back(string(token));		// is it deep copy?
		token = strtok(NULL, delimeter);
	}
	delete[] copy;
	return data;
}