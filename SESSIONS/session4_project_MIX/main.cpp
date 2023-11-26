#include"headers.h"
#include"classes.h"

int main()
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	Feet f1,f2(11,11.1),f3(f2),f4;
	f4.getFeet();
	f1.showFeet();
	f2.showFeet();
	f3.showFeet();
	f4.showFeet();

	Meter m1,m2(22,22.2),m3(m2),m4;
	m4.getMeter();
	m1.showMeter();
	m2.showMeter();
	m3.showMeter();
	m4.showMeter();

	
	
	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;

return 0;
}
