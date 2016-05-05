#ifndef USER_H
#define USER_H

#include <string>
#include "DatabaseImpl.h"
#include "UserWord.h"
#include "WordBankImpl.h"

class User : public DatabaseImpl
{
public:
	User(string _path_);
	virtual WordBankImpl<UserWord>* get_user_word_bank() = 0;
};

#endif