#include"headers.h"
#include"classes.h"

Feet Meter_To_Feet(Meter m)
{
	Feet temp;

	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;
	
	cout<<endl;
	cout<<endl;

	m.showMeter();

	cout<<endl;
	cout<<endl;
	
	m.cm= (m.cm + m.met*100);
	temp.ft = (m.cm/30.48);
	temp.inch = ((m.cm -temp.ft*30.48)/2.54);

	cout<<endl;
	cout<<endl;

	temp.showFeet();
	
	cout<<endl;
	cout<<endl;
	
	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return  temp;
}
