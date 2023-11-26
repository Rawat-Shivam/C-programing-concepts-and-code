#include"headers.h"
#include"classes.h"

void train::display_links()
{
#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif
     
	head->display(noOfCars);


#ifdef DEBUG
	cout<<"END: "<<__func__<<"\n";
#endif
}



