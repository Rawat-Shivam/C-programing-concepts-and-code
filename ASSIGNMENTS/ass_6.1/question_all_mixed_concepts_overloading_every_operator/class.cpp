#include<iostream>
using namespace std;

class Time
{
	private:
		int h;
		int m;
		double s;

	public:
		Time()
		{
			cout<<__func__<<":BEGIN"<<endl;

			cout<<"zero argument constructor invoked"<<endl;

			h=0;
			m=0;
			s=0.0;

			cout<<__func__<<":END"<<endl;
		}

		Time(int H, int M, double S):h(H),m(M),s(S)
		{
			cout<<__func__<<":BEGIN"<<endl;

			cout<<"three argument constructor invoked"<<endl;
			h=H;
			m=M;
			s=S;

			cout<<__func__<<":END"<<endl;
		}
		Time(const Time& t )
		{
			cout<<__func__<<":BEGIN"<<endl;

			cout<<"copy  constructor invoked"<<endl;

			h=t.h;
			m=t.m;
			s=t.s;

			cout<<__func__<<":END"<<endl;
		}

		void show()
		{
			cout<<__func__<<":BEGIN"<<endl;

			cout<<"Time:: "<<h<<":"<<m<<":"<<s<<"."<<endl;

			cout<<__func__<<":END"<<endl;
		}

		void get()
		{
			cout<<__func__<<":BEGIN"<<endl;

			cout<<"enter time in 24hr format; hour:minute:second"<<endl;
			cin>>h;
			cin>>m;
			cin>>s;

			cout<<__func__<<":END"<<endl;
		}

		Time operator++(int) 
		{
			cout<<__func__<<":BEGIN"<<endl;
			return Time(h++,m++,s++);
			cout<<__func__<<":END"<<endl;
		}

		Time operator++() 
		{
			cout<<__func__<<":BEGIN"<<endl;
			// return Time(h++,m++,s++);
			// this above return has post increment 
			// here post increment will work 
			// same as above overloaded function-> Time operator++(int)
			//so therefore its not  about logic in return
			//its about just syntax of prototype that
			//which pre/post will be called
			cout<<__func__<<":END"<<endl;

			 return Time(++h,++m,++s);
		}
		
		Time operator+( const Time &t) const
		{
			cout<<__func__<<":BEGIN"<<endl;
			
			Time temp;
			temp.h=h+t.h;
			temp.m=m+t.m;
			temp.s=s+t.s;
			
			cout<<__func__<<":END"<<endl;
			return temp;
		}
		Time operator=( const Time t) 
		{
			cout<<__func__<<":BEGIN"<<endl;
			
			h=t.h;
			m=t.m;
			s=t.s;
			
			cout<<__func__<<":END"<<endl;
		}

/************** here refrence is used so that default copy constructure does not get invoked ****************
		
  		Time operator=( const Time & t) 
		{
			cout<<__func__<<":BEGIN"<<endl;
			
			h=t.h;
			m=t.m;
			s=t.s;
			
			cout<<__func__<<":END"<<endl;
		}
**********************************************************************************************************/

		bool operator<(const Time & t) const
		{
			cout<<__func__<<":BEGIN"<<endl;
			
			if( h < t.h )
			{
				return true;
			}
			else if(h == t.h)
			{
				if( m < t.m )
				{
					return true;
				}
				else if( m == t.m )
				{
					if( s < t.s )
					{
						return true;
					}
					else if ( s == t.s)
					{
						cout<<endl<<" time is same"<<endl;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}

			}
			else
			{
				return false;
			}
			cout<<__func__<<":END"<<endl;
		}

		ostream operator<<(const Time &t) 
		{
			ostream output;
			output<<"Time:"<<t.h<<":"<<t.m<<":"<<t.s<<"."<<endl;
			return output;
		}
};

int  main()
{
	cout<<__func__<<"%s:BEGIN"<<endl;

	Time t1;

	Time t2(2,2,3.0);

	Time t3;

	t3.get();
	Time t4(t3);

	t1.show();
	t2.show();
	t3.show();
	t4.show();

	cout<<"lets overload t1 equal t2 and t2 increments"<<endl;
	//t1=t2++;
	t1=++t2;

	t1.show();
	cout<<endl;
	t2.show();
	
	cout<<endl<<"now adding t4+t3+t2 and storing in t1"<<endl;
	t1=t4+t3+t2;
	t1.show();
	
	cout<<endl<<"lets do assignment t3=t1 overloading"<<endl;
	t3=t1;
	t3.show();

	//cout<<endl<<"function operator overloading()";
	//it is nothing...go to google
	//copy the code
	//and play with this overloaded function and with constructor
	cout<<endl<<"lets compare t1 < t2"<<endl;
	if(t1<t2)
	{
		cout<<endl<<"t1 is lesser than t2"<<endl;
	}	
	else
	{
		cout<<endl<<"t2 is greater than t1"<<endl;
	}
	
	cout<<t1;

	cout<<__func__<<":END"<<endl;

	return 0;
}
