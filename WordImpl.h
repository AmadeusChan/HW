#ifndef WORD_IMPL_H
#define WORD_IMPL_H

#include <string>
#include "Word.h"
using namespace std;

class WordImpl : public Word
{
	string context_;
	string interpretation_;
	int difficulty_;

public:
	WordImpl(string _context_, string _interpretation_, string _difficulty_);
	string get_context();
	string get_interpretation();
	int get_difficulty();
};

#endif