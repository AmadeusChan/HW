#ifndef WORD_H
#define WORD_H

#include <string>
using namespace std;

class Word
{
public:
	virtual string get_context() = 0;
	virtual string get_interpretation() = 0;
	virtual int get_difficulty() = 0;
};

#endif