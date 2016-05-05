#ifndef VEIWER_DISPLAYER_IMPL_H
#define VEIWER_DISPLAYER_IMPL_H

#include "Viewer.h"
#include "ViewerDisplayer.h"
#include <string>
using namespace std;

class ViewerDisplayerImpl
{
	Viewer* current_page_;
public:
	ViewerDisplayerImpl(Viewer* start_page);
	string show();
	void submit(string command);
};

#endif
