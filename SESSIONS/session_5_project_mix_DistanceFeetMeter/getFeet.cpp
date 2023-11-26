#include"headers.h"
#include"classes.h"

int  Feet::getFeet()
{
	cout<<"BEGIN: "<<__func__<<":"<<__FILE__<<endl;

	cout<<__func__<< " called"<<endl;
	
	cout<<"E_N_T_E_R distance (feet)"<<endl;
	cin>>ft;
	cout<<endl;

	cout<<"E_N_T_E_R distance (inches)"<<endl;
	cin>>inch;
	cout<<endl;

	cout<<"END: "<<__func__<<":"<<__FILE__<<endl;
	return 0;
}
