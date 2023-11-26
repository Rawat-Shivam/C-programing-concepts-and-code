#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter value for integer varible n=";
	cin>>n;
	cout<<"octal(o) representation of integer n: "<<oct<<n;
	cout<<"hex(oX) representation of integer n: "<<hex<<n;

	cout<<endl<<endl;
	//////////////////////////////////////////////////////////
	
	cout<<"decimal(<<dec<<15): "<<dec<<15<<endl;
	cout<<"octal(<<oct<<15): "<<oct<<15<<endl;
	cout<<"hex(<<hex<<15): "<<hex<<15<<endl;
	cout<<"floating point number(<<3.14159): "<<3.14159<<endl;
	cout<<"non printing char escape(<<char(27)): "<<char(27)<<endl;

	////////////////////////////////////////////////
	
	cout<<endl<<endl;

	cout<<"decimal(<<dec<<int('a')): "<<dec<<int('a')<<endl;
	cout<<"decimal(<<dec<<char('a')): "<<dec<<char('a')<<endl;
	cout<<endl;

	cout<<"octal(<<oct<<8): "<<oct<<8<<endl;
	cout<<"octal(<<oct<<24): "<<oct<<24<<endl;
	cout<<endl;

	cout<<"hex(<<hex<<16): "<<hex<<16<<endl;
	cout<<"hex(<<hex<<0.0004): "<<hex<<0.0004<<endl;
	cout<<"hex(<<hex<<32): "<<hex<<32<<endl;
	cout<<"hex(<<hex<<16.000): "<<hex<<16.000<<endl;
	cout<<endl;

	cout<<"floating point number(<<3): "<<3<<endl;
	cout<<"floating point number(<<3.): "<<3.<<endl;
	cout<<"floating point number(<<0.009): "<<0.009<<endl;
	cout<<endl;

	cout<<"non printing char escape(<<char(space)): "<<char( )<<endl;
	cout<<"non printing char escape(<<char(tab)): "<<char(	)<<endl;
	cout<<endl;

	cout<<"ASCII (<<char('A')): "<<char('A')<<endl;
	cout<<"ASCII (<<int('A')): "<<int('A')<<endl;
	cout<<"ASCII (<<char(97)): "<<char(97)<<endl;
	cout<<"ASCII (<<int(97)): "<<int(97)<<endl;
return 0;
}
