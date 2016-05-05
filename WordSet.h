#ifndef WORD_SET_H
#define WORD_SET_H

#include<vector>
#include<string>
using namespace std;

template <typename T> class WordSet
{
public:
	virtual vector<T*> get_words() = 0;
	virtual T* find_word_by_context(string context) = 0;
	virtual void add_word(T* word) = 0;
	virtual void remove_word(T* word) = 0;
};

#endif