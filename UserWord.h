#ifndef USER_WORD_H
#define USER_WORD_H

#include <string>
#include <vector>
#include "WordImpl.h"
using namespace std;

class UserWord : public WordImpl
{
public:
	UserWord(string _context_, string _interpretation_, string _difficulty_);
	virtual double get_memory_level() = 0;
	virtual vector<string> get_example_sentences() = 0;
	virtual void add_sample_sentence(string sample_sentence) = 0;
};

#endif