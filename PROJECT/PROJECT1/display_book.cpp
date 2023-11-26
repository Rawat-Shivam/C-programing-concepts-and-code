#include"headers.h"
#include"class.h"
int library::display_book()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<"BOOK COLLECTION :"<<endl;
	ifstream file;
	int count=0;
	file.open("book.dat",ios::app|ios::binary|ios::in|ios::out);
	//insert_book();
	while(file.good())
	{
	file.read((char*)this,sizeof(*this));
	cout<<endl;
	cout<<"["<<count<<"]"<<","<<"["<<book.State<<"]"<<","<<book.authors<<" , "<<book.Publication_date<<" , "<<book.Title<<","<<book.Publisher_location<<endl;
	cout<<endl;
	count++;
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
	return 0;
}
