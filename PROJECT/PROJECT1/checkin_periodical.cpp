#include"headers.h"
#include"class.h"
int library::checkin_periodical()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	cout<<endl;
	ofstream file("periodical.dat",ios::app|ios::binary|ios::in);
	getchar();
	int PState=1;
	if(PState)
		strcpy(periodical.State,"ON_SHELF");
	else 
		strcpy(periodical.State,"OFF_SHELF");
	cout<<"Enter Author Name:";cin.getline(periodical.authors,128,'\n');
	cout<<"Enter Publication Date:";cin.getline(periodical.Publication_date,11,'\n');
	cout<<"Enter Title:";cin.getline(periodical.Title,128,'\n');
	cout<<"Enter Publication name:";cin.getline(periodical.Publisher_name,128,'\n');
	file.write((char*)this,sizeof(*this));	
	cout<<endl;
	cout<<"End"<<__FILE__<<__func__<<endl;
}
