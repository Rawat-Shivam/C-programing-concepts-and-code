#include"headers.h"
#include"class.h"
int library::checkout_book()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	ifstream file("book.dat",ios::binary|ios::in|ios::out|ios::app);
	ofstream nfile("book.dat",ios::binary|ios::in|ios::out|ios::app);
	char choice[128];
	cout<<"Enter the book you want"<<endl;
	getchar();
	cin.getline(choice,128,'\n');
	while(file.good())
	{
		file.read((char*)this,sizeof(*this));
		if(strcmp(choice,book.Title)==0)
			strcpy(book.State,"OFF_SHELF");
		else 
			strcpy(book.State,"ON_SHELF");
		nfile.write((char*)this,sizeof(*this));
	}
	getchar();
	cout<<"End"<<__FILE__<<__func__<<endl;
}
