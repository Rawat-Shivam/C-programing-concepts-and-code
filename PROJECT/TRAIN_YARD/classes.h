
using namespace std;

//this class represent train_car (node)
class t_car 
{
	private:
		const char *name = new char(18);//name of the train_car
		t_car *next; // pointer to next node
	public:
		//one argument constructor
		t_car( const char *s); //creats a single train_car just like  a node in linklist
	
		void connect(class t_car & obj);// this will connect all the nodes
		
		void display( int n);//this will display train after connecting

		void reverse(int noc);// it will reverse train
};

// this class represent train (link list)
class train
{
	private:
		int noOfCars;// number of train_car attached to train
		t_car *head; // head node for link list
	public:
		train();//constructor

		void create_links();//this will create nodes and call connect() for each node  
              
		void display_links();// this will call display()

		void reverse_links();//this will call reverse()

};


