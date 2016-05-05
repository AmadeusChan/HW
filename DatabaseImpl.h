#ifndef DATABASE_IMPL_H
#define DATABASE_IMPL_H

#include <string>
#include "Database.h"
#include "OperateFileStrategy.h"

class DatabaseImpl : public Database
{
	string path_;
	OperateFileStrategy* m_operate_file_strategy_;
protected:
	virtual string convert_data_to_string() = 0;
	virtual void convert_string_to_data() = 0;

public:
	DatabaseImpl(OperateFileStrategy* _m_operate_file_strategy_, string _path_);
	void save();
	void load();
	~DatabaseImpl();
};

#endif