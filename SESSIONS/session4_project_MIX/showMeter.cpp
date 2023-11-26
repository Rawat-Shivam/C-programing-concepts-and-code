#include"headers.h"
#include"classes.h"

int  Meter::showMeter()
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<<__func__<< " called"<<endl;
	
	cout<<"distance (meter)"<<met<<endl;

	cout<<"distance (centimeter)"<<cm<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return 0;
}
