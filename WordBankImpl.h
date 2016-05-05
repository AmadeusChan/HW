#ifndef WORD_BANK_IMPL_H
#define WORD_BANK_IMPL_H

#include <vector>
#include "WordBank.h"
#include "WordSet.h"
#include "UserImpl.h"

template <typename T> class WordBankImpl : public WordBank<T>
{
	WordSet<T>* m_word_set_;

protected:
	string convert_data_to_string();
	void convert_string_to_data();

public:
	friend class UserImpl;
	WordBankImpl(WordSet<T>* _m_word_set_, string _path_);
	vector<T*> get_words();
	T* find_word_by_context(string context);
	void add_word(T* word);
	void remove_word(T* word);
	~WordBankImpl();
};

#endif