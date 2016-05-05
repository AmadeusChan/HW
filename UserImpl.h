#ifndef USER_IMPL_H
#define USER_IMPL_H

#include <string>
#include "User.h"
#include "DatabaseImpl.h"
#include "UserWordImpl.h"
#include "WordBankImpl.h"

class UserImpl : public User
{
	WordBankImpl<UserWord> word_bank_;
	string user_name_;
protected:
	string convert_data_to_string();
	void convert_string_to_data();
public:
	UserImpl(string _user_name_, string _path_);
	WordBankImpl<UserWord>* get_user_word_bank();
};

#endif