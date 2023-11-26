#include<iostream>
using namespace std;
class shape
{
	private:
		 float l,b,r;	//lenght , breadth , radius
		 void changes()
		 {
		 	l=l+1;
			b=b-1;
			r=r+2;
		 }

	public:
		 void get()
		 {
			cout<<"enter length, breadth, radius"<<endl;
			cin>>l;
			cin>>b;
			cin>>r;
			cout<<endl;
		 }
		 void show()
		 {
		 	cout<< "length :"<<l<<endl<<"breadth :"<<b<<endl<<"radius :"<<r<<endl;
			cout<<endl;
		 }
		 void lets_change()
		 {
		 	changes();
		 }
/************************************************ concept 1 **********************************
		 shape operator+( const shape & s ) const
		 {
		 	shape temp;
		 	temp.l= l+s.l;
	       		temp.b= b+s.b;
	 		temp.r= r+s.r;
			return temp;		
		 } 
********************************************** concept 2 *************************************************/
		 shape operator+(const shape &s) const
		 {
			float len,bre,rad;
		 	len= l + s.l;
			bre= b + s.b;
			rad= r + s.r;
			return shape(len,bre,rad);// during unnamed object return 
							// we must have a constructor 
							// of same no of arguments 
		 }
};

int main()
{
	printf("%s :BEGIN\n",__func__);
	
	shape s1,s2,s3;
	
	s1.get();
	s2.get();
	//s3.lets_change();

	s1.show();
	s2.show();
	s3.show();

	//s1.lets_change();
	//s1.show();
	s3=s1+s2;
	s3.show();

	cout<<__func__<<" :END"<<endl;
}
