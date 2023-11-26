#include"headers.h"
#include"class.h"
int library::display()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	ifstream file,pfile,dfile;
	int count=0,count1=0,count2=0;
	file.open("book.dat",ios::binary);
	pfile.open("periodical.dat",ios::binary);
	dfile.open("DVD.dat",ios::binary);
	cout<<"BOOK COLLECTION :"<<endl;
	while(file.good())
	{
	file.read((char*)this,sizeof(*this));
		if(file.good())
			count++;
	cout<<endl;
	cout<<"["<<count<<"]"<<","<<"["<<book.State<<"]"<<","<<book.authors<<" , "<<book.Publication_date<<" , "<<book.Title<<endl;
	cout<<endl;
	}
	cout<<"PERIODICAL COLLECTION :"<<endl;
	while(pfile.good())
	{
		if(pfile.good())
			count1++;
	pfile.read((char*)this,sizeof(*this));
	cout<<endl;
	cout<<"["<<count1<<"]"<<","<<"["<<periodical.State<<"]"<<","<<periodical.authors<<" , "<<periodical.Publication_date<<" , "<<periodical.Title<<","<<periodical.Publisher_name<<endl;
	cout<<endl;
	}
	cout<<"DVD COLLECTION :"<<endl;
	while(dfile.good())
	{
		if(dfile.good())
			count2++;
	dfile.read((char*)this,sizeof(*this));
	cout<<endl;
	cout<<"["<<count2<<"]"<<","<<"["<<DVD.State<<"]"<<","<<DVD.artist<<" , "<<DVD.Title<<","<<DVD.Label<<","<<DVD.Date<<endl;
	cout<<endl;
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
	return 0;
}
