#include<iostream>
using namespace std;
class t_car 
{
	private:
		char *name = new char(8);//name of the train_car
		t_car *next;
	public:
		t_car(char *s) //creating a single train_car just like creating a node in linklist
		{
			cout<<"BEGIN: "<<__func__<<"\n";
			name=s;	
			next=NULL;
			cout<<"END: "<<__func__<<"\n";
		}
		void connect(class t_car & obj)
		{
			cout<<"BEGIN: "<<__func__<<"\n";
			cout<<endl;
			
			cout<<"address of this-> "<<this;
			cout<<endl;
			cout<<"address of &obj "<<&obj;	
			cout<<endl;
			
			this->next=&obj;
			
			cout<<" address of this->next "<<this->next;
			cout<<endl;
		
			cout<<"END: "<<__func__<<"\n";
		}
		
		void display( int n)
		{
			cout<<"BEGIN: "<<__func__<<"\n";
			
			cout<<endl;
			cout<<"address of this-> "<<this;	
			cout<<endl;
			cout<<"address of this->next"<<this->next;
			cout<<endl;
			cout<<endl;
			
			cout<<"::__"<<this->name<<"__::";
                        t_car *p = this->next;
                        for(int i=0; i <n-1; i++)
                        {
                                cout<<"::__"<<p->name<<"__::";
                                p=p->next;
                        }

			cout<<endl;
			cout<<endl;
			
			cout<<"END: "<<__func__<<"\n";
		}

		void reverse(int noc)
		{
			cout<<"BEGIN: "<<__func__<<"\n";
                        
			cout<<"no of t_cars:"<<noc;

			//lets save first, second, secondn last, last nodes(t_car)
			t_car *headPointer=this;
			t_car *headNext=headPointer->next;

			t_car *endPointer=NULL;
			t_car *endBefore=NULL;
			
			t_car *tmp=this;//a temporary pointer just to traverse

			//here traversing to last to store last and second last nodes address
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
			// now we will reverse the t_car between second and second last

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
			
			cout<<"END: "<<__func__<<"\n";
		
		}


};
// this class represent train
class train
{
	private:
		int noOfCars;// number of train_car attached to train
		t_car *head;
	public:
		train()
		{
			cout<<"BEGIN: "<<__func__<<"\n";
			noOfCars=8;
			cout<<"END: "<<__func__<<"\n";
		}
		void create_links()
		{
			cout<<"BEGIN: "<<__func__<<"\n";
			
			t_car *node1= new t_car("AaaaaA");
                        head=node1;

                        t_car *node2= new t_car("BbbbbB");
                        node1->connect( *node2);

                        t_car *node3= new t_car("CccccC");
                        node2->connect( *node3);

                        t_car *node4= new t_car("DddddD");
                        node3->connect( *node4);

			t_car *node5= new t_car("EeeeeE");
			node4->connect( *node5 );

			t_car *node6= new t_car("FffffF");
			node5->connect( *node6 );

			t_car *node7= new t_car("GggggG");
			node6->connect( *node7 );

			t_car *node8= new t_car("HhhhhH");
			node7->connect( *node8 );

                        cout<<"END: "<<__func__<<"\n";
                }

                void display_links()
                {
                        cout<<"BEGIN: "<<__func__<<"\n";
                        head->display(noOfCars);
                        cout<<"END: "<<__func__<<"\n";
                }

		void reverse_links()
		{
		
                        cout<<"BEGIN: "<<__func__<<"\n";
                        head->reverse(noOfCars);
                        cout<<"END: "<<__func__<<"\n";
		
		}

};

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


