#include"headers.h"
#include"classes.h"
void train::create_links()
{
#ifdef DEBUG
	cout<<"BEGIN: "<<__func__<<"\n";
#endif

	t_car *node1= new t_car("locomotive");
        head=node1;

	t_car *node2= new t_car("coal");
        node1->connect( *node2);

	t_car *node3= new t_car("box");
        node2->connect( *node3);

        t_car *node4= new t_car("tank");
        node3->connect( *node4);

	t_car *node5= new t_car("coal");
	node4->connect( *node5 );

	t_car *node6= new t_car("box");
	node5->connect( *node6 );

	t_car *node7= new t_car("hopper");
	node6->connect( *node7 );

	t_car *node8= new t_car("caboose");
	node7->connect( *node8 );

#ifdef DEBUG
        cout<<"END: "<<__func__<<"\n";
#endif
}


