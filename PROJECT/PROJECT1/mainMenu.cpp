#include"headers.h"
#include"class.h"
int library::mainMenu()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;	
	int choice;
	cout<<"***********LIBRARY INVENTORY MANAGER*************"<<endl;
	cout<<endl;
	cout<<"0 - QUIT"<<endl;
	cout<<"1 - Display all collections"<<endl;
	cout<<"2 - Display book collection"<<endl;
	cout<<"3 - Display periodical collection"<<endl;
	cout<<"4 - Display DVD collection"<<endl;
	cout<<"5 - Checkout book "<<endl;
	cout<<"6 - Checkout periodical "<<endl;
	cout<<"7 - Checkout DVD "<<endl;
	cout<<"8 - Checkin book "<<endl;
	cout<<"9 - Checkin periodical "<<endl;
	cout<<"10 - Checkin DVD "<<endl;
	cout<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 0:exit(0);
		case 1:display();
		      	break;
		case 2:display_book();
		       break;
		case 3:display_periodical();
		       break;
		case 4:display_DVD();
		       break;
		case 5:checkout_book();
		       break;
		case 6:checkout_periodical();
		       break;
		case 7:checkout_DVD();
		       break;
		case 8:checkin_book();
		       break;
		case 9:checkin_periodical();
		       break;
		case 10:checkin_DVD();
		       break;
		default:cout<<"Please enter a valid entry"<<endl;
	}
	cout<<endl;
	cout<<"End"<<__FILE__<<__func__<<endl;	
	return 0;
}
