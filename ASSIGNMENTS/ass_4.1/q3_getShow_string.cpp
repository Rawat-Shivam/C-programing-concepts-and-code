#include<iostream>
using namespace std;

class SS
{
	private:
		
		char s[10];


	public:
		SS()
		{
			cout<<"constructor"<<endl;
			s[10]='\0';

			
		}

		void getstring()
		{
			cin>>s;
			cout<<endl;
		}
		
		void showstring()
		{
			cout<<s<<endl;
		}

};

int main()
{

	SS s1;
	s1.showstring();
	s1.getstring();
	s1.showstring();


return 0;
}
