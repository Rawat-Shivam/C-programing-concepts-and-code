#include"headers.h"
#include"class.h"
int library::checkout_periodical()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	char choice[128];
	cout<<"Enter the periodical you want"<<endl;
	cin.getline(choice,128,'\n');
	ifstream file("periodical.dat",ios::binary|ios::in|ios::out|ios::app);
	while(file.good())
	{
		file.read((char*)this,sizeof(*this));
		if(strcmp(choice,periodical.Title)==0)
			strcpy(periodical.State,"OFF_SHELF");
		else 
			strcpy(periodical.State,"ON_SHELF");
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
}
