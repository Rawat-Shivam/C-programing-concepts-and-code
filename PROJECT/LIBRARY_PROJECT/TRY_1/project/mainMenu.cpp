#include"header.cpp"
#include"declaration.cpp"
//#include"class.cpp"

int  mainMenu()
{
	int choice;
	cout<<"___________________________________________________"<<endl;
	cout<<"|                                                 |"<<endl;
	cout<<"|------------ Library Inventory Manager ----------|"<<endl;
	cout<<"| 0:Quit                                          |"<<endl;
	cout<<"| 1:DIsplay all collections                       |"<<endl;
	cout<<"| 2:Display book collection                       |"<<endl;
	cout<<"| 3:Display periodical collection                 |"<<endl;
	cout<<"| 4:Display DVD collection                        |"<<endl;
	//cout<<endl;
	cout<<"| 10:Checkout book                                |"<<endl;
	cout<<"| 11:Checkout periodical                          |"<<endl;
	cout<<"| 12:Checkout DVD                                 |"<<endl;
	//cout<<endl;
	cout<<"| 20:Checkin book                                 |"<<endl;
	cout<<"| 21:Checkin periodical                           |"<<endl;
	cout<<"| 21:Checkin DVD                                  |"<<endl;
	cout<<"|_________________________________________________|"<<endl;
	//cout<<endl;
	cout<<endl;
	cout<<"select your choice::";
	cin>>choice;

return choice;
}
