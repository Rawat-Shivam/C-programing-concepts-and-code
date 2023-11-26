#include"headers.h"
#include"classes.h"

Meter::Meter(const Meter &obj):met(obj.met),cm(obj.cm)
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;
        
	cout<< " COPY constructor " <<__func__<< " called"<<endl;

        cout<<"END: "<<__func__<<":"<<__FILE__<<endl;

}
