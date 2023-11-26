#include"headers.h"
#include"classes.h"
		
void t_car::display( int n)//this will display all nodes
{
#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif
	//just to check addressess....	

#ifdef DEBUG	
	cout<<endl;
	cout<<"address of this-> "<<this;	
	cout<<endl;
	cout<<"address of this->next"<<this->next;
#endif

	// going ...to traverse each t_car(node) 		
	cout<<endl<<endl;
	
	cout<<"::__"<<this->name<<"__::";
	t_car *p = this->next;
        for(int i=0; i <n-1; i++)
        {
        	cout<<"::__"<<p->name<<"__::";
                p=p->next;
	}
	
	cout<<endl<<endl;
#ifdef DEBUG
	cout<<"END: "<<__func__<<"\n";
#endif
}

