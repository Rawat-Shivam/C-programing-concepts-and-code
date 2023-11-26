#include<iostream>
#include<cstring>

using namespace std;

int main()
{

	int max=80;
	char str1[]="he is the man of the words\n"
		"but she is not the woman to belive";
	char str[max];
	for(int i=0; i<strlen(str1);i++)
	{
		str[i]=str1[i];
	}

	cout<<endl<<str<<endl;
	

	cin>>str1;

	strcpy(str,str1);
	
	cout<<endl<<str<<endl;

return 0;
}


