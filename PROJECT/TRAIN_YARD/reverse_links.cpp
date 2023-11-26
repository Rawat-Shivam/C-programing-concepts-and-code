#include"headers.h"
#include"classes.h"

void train::reverse_links()
{		
 
#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif

	head->reverse(noOfCars);
	
#ifdef DEBUG
	cout<<"END: "<<__func__<<"\n";		
#endif	
}

