#include"headers.h"
#include"classes.h"

int  Meter::getMeter()
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<<__func__<< " called"<<endl;
	
	cout<<"E_N_T_E_R distance (meter)"<<endl;
	cin>>met;
	cout<<endl;

	cout<<"E_N_T_E_R distance (centimeter)"<<endl;
	cin>>cm;
	cout<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return 0;
}
