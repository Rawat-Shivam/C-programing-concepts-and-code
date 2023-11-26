#include"headers.h"
#include"class.h"
int library::checkin_book()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<endl;
	ofstream file("book.dat",ios::app|ios::binary|ios::in);
	getchar();
	int BState=1;
	if(BState)
		strcpy(book.State,"ON_SHELF");
	else 
		strcpy(book.State,"OFF_SHELF");
	cout<<"Enter Author Name:";cin.getline(book.authors,128,'\n');
	cout<<"Enter Publication Date:";cin.getline(book.Publication_date,11,'\n');
	cout<<"Enter Title:";cin.getline(book.Title,128,'\n');
	cout<<"Enter Publication Date:";cin.getline(book.Publication_date,81,'\n');
	file.write((char*)this,sizeof(*this));	
	cout<<endl;
	cout<<"End"<<__FILE__<<__func__<<endl;
}
