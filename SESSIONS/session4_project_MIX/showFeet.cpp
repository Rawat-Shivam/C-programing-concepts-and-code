#include"headers.h"
#include"classes.h"

int  Feet::showFeet()
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<<__func__<< " called"<<endl;
	
	cout<<"distance (feet)"<<ft<<endl;

	cout<<"distance (inches)"<<inch<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return 0;
}
