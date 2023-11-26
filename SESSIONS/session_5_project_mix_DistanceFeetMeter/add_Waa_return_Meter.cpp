#include"headers.h"
#include"classes.h"

Meter add_Waa_return_Meter(Feet f, Meter m)
{
	Meter temp;

	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;
	
	cout<<endl;
	cout<<endl;
	f.showFeet();
	cout<<endl;
	cout<<endl;

	
	cout<<endl;
	cout<<endl;
	m.showMeter();
	cout<<endl;
	cout<<endl;
	
	f.inch=(f.inch+(f.ft*12));
	temp.cm=(f.inch*2.54);
	temp.met=(temp.cm/100);
	temp.cm= (temp.cm -(temp.met*100));

	temp.cm= ( temp.cm + (m.met*100) + m.cm );
	temp.met=(temp.cm/100);
        temp.cm= (temp.cm -(temp.met*100));



	cout<<endl;
	cout<<endl;
	temp.showMeter();
	cout<<endl;
	cout<<endl;
	
	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return  temp;
}
