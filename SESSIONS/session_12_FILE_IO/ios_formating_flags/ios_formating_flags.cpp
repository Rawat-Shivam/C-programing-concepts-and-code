#include<iostream>
using namespace std;

int main()
{
	
	cout.setf(ios::left);
	cout<<"hi hello";
	cout<<endl;
	cout<<dec<<123;
	cout<<endl;

	cout<<dec<<1;
	cout<<endl;
	
	cout<<" where were u when i came to see u"<<endl;
	cout.unsetf(ios::left);

	cout<<"after unset left"<<endl;
	cout<<endl<<endl;

	cout.setf(ios::right);
	cout<<"hi hello";
	cout<<endl;

	cout<<dec<<10023;
	cout<<endl;

	cout<<dec<<01;
	cout<<endl;
	cout<<"where were u when i came to see u"<<endl;
	cout.unsetf(ios::right);
	cout<<"after unset right"<<endl;
	

return 0;
}
