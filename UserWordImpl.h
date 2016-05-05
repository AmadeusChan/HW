#ifndef USER_WORD_IMPL_H
#define USER_WORD_IMPL_H

#include <string>
#include <vector>
#include "UserWord.h"
using namespace std;

class UserWordImpl : public UserWord
{
	double memory_level_;
	vector<string> sample_sentences_;

public:
	UserWordImpl(string _context_, string _interpretation_, string _difficulty_);
	double get_memory_level();
	vector<string> get_example_sentences();
	void add_sample_sentence(string sample_sentence);
};

#endif