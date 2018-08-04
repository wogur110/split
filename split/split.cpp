#include "split.h"

char *str_tok(char *str, const char delimiter)
{
	static char *next = NULL;
	char *start;
	
	if(str == NULL)
	{
		if(next == NULL)
			{ return NULL; }
		else
			{ start = next; }
	}
	else
		{ start = str; }
	
	char *pointer;
	for (pointer = start; *pointer != NULL; pointer++ )
	{
		if(*pointer == delimiter)
		{
			*pointer = NULL;
			next = pointer + 1;
			return start;
		}
	}
	next = NULL;
	return start;
	
}

vector<string> split(string *str, const char delimiter)
{
	vector<string> info;
	char *copy = new char[str->length()+1];
	strncpy(copy, str->data(), str->length());
	char *token;
	token = str_tok(copy, delimiter);
	while(token)
	{
		info.push_back(string(token));		// is it deep copy?
		token = str_tok(NULL, delimiter);
	}
	delete[] copy;
	return info;
};

/*
vector<string> split(string *str, const char *delimiter)
{
	vector<string> info;
	char *copy = new char[str->length()+1];
	strncpy(copy, str->data(), str->length());
	char *token;
	token = strtok(copy, delimiter);
	while(token)
	{
		info.push_back(string(token));		// is it deep copy?
		token = strtok(NULL, delimiter);
	}
	delete[] copy;
	return info;
};
*/