#ifndef WORD_SET_BY_MAP_H
#define WORD_SET_BY_MAP_H

#include "wordset.h"
#include <map>
#include <string>
using namespace std;

template <typename T> class WordSetByMap : public WordSet<T>
{
	map<string, T*> words_;

public:
	vector<T*> get_words();
	T* find_word_by_context(string context);
	void add_word(T* word);
	void remove_word(T* word);//delete memory before remove
};

#endif
