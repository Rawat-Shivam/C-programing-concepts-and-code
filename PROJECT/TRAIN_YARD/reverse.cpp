#include"headers.h"
#include"classes.h"

void t_car::reverse(int noc)
{	
#ifdef DEBUG	
	cout<<"BEGIN: "<<__func__<<"\n";
#endif  

#ifdef DEBUG
	cout<<"no of t_cars:"<<noc<<"\n";
#endif

	//lets save first, second, secondn last, last nodes(t_car)
	t_car *headPointer=this;//first
	t_car *headNext=headPointer->next;//second
	t_car *endPointer=NULL;//last
	t_car *endBefore=NULL;//second last
		
	t_car *tmp=this;//a temporary pointer just to traverse

	//here traversing to last to get last and second last nodes address
	while(tmp->next->next!=NULL)
	{
		tmp=tmp->next;
		if(tmp->next->next==NULL)
		{
			endBefore=tmp;
			tmp=tmp->next;
			endPointer=tmp;		
			break;
		}
	}
	// so now we have got first, second, second last, last nodes(t_car)	
	
	
	// now we will reverse the t_car between second node and second last node
	t_car *current=headNext;
	t_car *prev=NULL,*next=NULL;
	
	while(current!=endPointer)
	{
		next=current->next;
		current->next=prev;

		prev=current;
		current=next;
	}		
			
	
	//now we will 
	// connect first node to second last node
	headNext->next=endPointer;
	//connect second node to last node
	headPointer->next=endBefore;
	
	headPointer->display(noc);
#ifdef DEBUG	
	cout<<"END: "<<__func__<<"\n";
#endif
}


