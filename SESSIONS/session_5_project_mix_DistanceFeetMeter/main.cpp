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
	Meter add_Ret_M;
	m4.getMeter();
	m1.showMeter();
	m2.showMeter();
	m3.showMeter();
	m4.showMeter();

//	m1.Feet_To_Meter(f4)
	
	m1=Feet_To_Meter(f4);
	f1=Meter_To_Feet(m4);

	add_Ret_M=add_Waa_return_Meter(f4,m4);
		
	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;

return 0;
}
