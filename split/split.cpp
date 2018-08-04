#include "split.h"

char *str_tok(char *str, const char delimeter);

vector<string> split(string *str, const char *delimeter)
{
	vector<string> info;
	char *copy = new char[str->length()+1];
	strncpy(copy, str->data(), str->length());
	char *token;
	token = strtok(copy, delimeter);
	while(token)
	{
		info.push_back(string(token));		// is it deep copy?
		token = strtok(NULL, delimeter);
	}
	delete[] copy;
	return info;
};