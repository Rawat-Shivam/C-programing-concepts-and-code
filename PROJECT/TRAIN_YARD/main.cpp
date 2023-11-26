#include"headers.h"
#include"classes.h"


int main()
{
	cout<<"BEGIN: "<<__func__<<";"<<"\n";
	
	train Tobj;
	
	Tobj.create_links();
	Tobj.display_links();
	Tobj.reverse_links();

	cout<<"END: "<<__func__<<";"<<"\n";
	return 0;
}


