#include"headers.h"
#include"classes.h"

Feet::Feet(int f, float i): ft(f),inch(i)
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<< " T_W_O argument constructor " <<__func__<< " called"<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
}
