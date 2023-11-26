#include"headers.h"
#include"classes.h"

Feet::Feet(const Feet &obj):ft(obj.ft),inch(obj.inch)
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;
        
	cout<< " COPY constructor " <<__func__<< " called"<<endl;

        cout<<"END: "<<__func__<<":"<<__FILE__<<endl;

}
