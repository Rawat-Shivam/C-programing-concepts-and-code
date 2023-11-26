#include"headers.h"
#include"class.h"
int library::display_periodical()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<"PERIODICAL COLLECTION :"<<endl;
	ifstream file;
	int count=0;
	file.open("periodical.dat",ios::app|ios::binary|ios::in|ios::out);
	//insert_book();
	while(file.good())
	{
	file.read((char*)this,sizeof(*this));
	cout<<endl;
	cout<<"["<<count<<"]"<<","<<"["<<periodical.State<<"]"<<","<<periodical.authors<<" , "<<periodical.Publication_date<<" , "<<periodical.Title<<","<<periodical.Publisher_name<<endl;
	cout<<endl;
	count++;
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
	return 0;
}
