#include"headers.h"
#include"class.h"
int library::checkin_DVD()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<endl;
	ofstream file("DVD.dat",ios::app|ios::binary|ios::in);
	getchar();
	int DState=1;
	if(DState)
		strcpy(DVD.State,"ON_SHELF");
	else 
		strcpy(DVD.State,"OFF_SHELF");
	cout<<"Enter Artist Name:";cin.getline(DVD.artist,128,'\n');
	cout<<"Enter Title:";cin.getline(DVD.Title,128,'\n');
	cout<<"Enter Label:";cin.getline(DVD.Label,81,'\n');
	cout<<"Enter Date:";cin.getline(DVD.Date,11,'\n');
	file.write((char*)this,sizeof(*this));	
	cout<<endl;
	cout<<"End"<<__FILE__<<__func__<<endl;
}
