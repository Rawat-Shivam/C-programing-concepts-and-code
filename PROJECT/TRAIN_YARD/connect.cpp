#include"headers.h"
#include"classes.h"


void t_car::connect(class t_car & obj)
{
#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif
	this->next=&obj;
	
	// this was used to see and check addressess...

#ifdef DEBUG
	cout<<endl;
	cout<<"address of this-> "<<this;
	cout<<endl;
	cout<<"address of &obj "<<&obj;	
	cout<<endl;
	cout<<" address of this->next "<<this->next;
	cout<<endl;
#endif

		
#ifdef DEBUG
	cout<<"END: "<<__func__<<"\n";
#endif
}
		
