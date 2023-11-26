#include<iostream>
#include<string>

using namespace std;
int main()
{

	string s1("man or woman");
	string s2="best heast";
	string s3;
	s3=s1;
	cout<<endl<<"s3="<<s3<<endl;
	s3="neither"+s1+"nor";
	s3+=s2;
	cout<<endl<<"s3="<<s3<<endl;

	s1.swap(s2);
	cout<<s1<<"nor"<<s2<<endl;

return 0;
}
