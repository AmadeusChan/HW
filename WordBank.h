#ifndef WORD_BANK_H
#define WORD_BANK_H

#include <vector>
#include "DatabaseImpl.h"

template <typename T> class WordBank : public DatabaseImpl
{
public:
	WordBank(string _path_);
	virtual vector<T*> get_words() = 0;
	virtual T* find_word_by_context(string context) = 0;
	virtual void add_word(T* word) = 0;
	virtual void remove_word(T* word) = 0;
};

#endif