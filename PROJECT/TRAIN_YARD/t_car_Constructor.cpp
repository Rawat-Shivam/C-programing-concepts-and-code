#include"headers.h"
#include"classes.h"
		
t_car::t_car( const char *s) //creating a single train_car just like creating a node in linklist
{

#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif
	
	//making node
	name=s;	//node data
	next=NULL; // node next pointer

#ifdef DEBUG	
	cout<<"END: "<<__func__<<"\n";
#endif
}


