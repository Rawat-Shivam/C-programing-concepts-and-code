#include"headers.h"
#include"classes.h"

Meter Feet_To_Meter(Feet f)
{
	Meter temp;

	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;
	
	cout<<endl;
	cout<<endl;
	f.showFeet();
	cout<<endl;
	cout<<endl;

	f.inch=(f.inch+(f.ft*12));
	temp.cm=(f.inch*2.54);
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
