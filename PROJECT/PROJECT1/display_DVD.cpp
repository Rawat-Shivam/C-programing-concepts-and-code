#include"headers.h"
#include"class.h"
int library::display_DVD()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<"DVD COLLECTION :"<<endl;
	ifstream file;
	int count=0;
	file.open("DVD.dat",ios::app|ios::binary|ios::in|ios::out);
	//insert_book();
	while(file.good())
	{
	file.read((char*)this,sizeof(*this));
	cout<<endl;
	cout<<"["<<count<<"]"<<","<<"["<<DVD.State<<"]"<<","<<DVD.artist<<" , "<<DVD.Title<<" , "<<DVD.Label<<","<<DVD.Date<<endl;
	cout<<endl;
	count++;
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
	return 0;
}
