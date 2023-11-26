#include"headers.h"
#include"class.h"
int library::checkout_DVD()
{
	cout<<"Begin"<<__FILE__<<__func__<<endl;
	char choice[128];
	cout<<"Enter the DVD you want"<<endl;
	cin.getline(choice,128,'\n');
	ifstream file("DVD.dat",ios::binary|ios::in|ios::out|ios::app);
	while(file.good())
	{
		file.read((char*)this,sizeof(*this));
		if(strcmp(choice,DVD.Title)==0)
			strcpy(DVD.State,"OFF_SHELF");
		else 
			strcpy(DVD.State,"ON_SHELF");
	}
	cout<<"End"<<__FILE__<<__func__<<endl;
}
