#include"headers.h"
#include"classes.h"

Meter::Meter(int m, float c): met(m),cm(c)
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<< " T_W_O argument constructor " <<__func__<< " called"<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
}
