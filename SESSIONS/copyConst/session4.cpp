#include<iostream>
using namespace std;

class coPy
{
	private:
		int p;
		int *ptr;
	public:
		int abc;
		coPy(int a, int b)
		{
			p=a;
			abc=b;
		}
		coPy(class coPy &obj)
		{
			p=obj.p;
			abc=obj.abc;
		}
		void get_p()
		{
			p=abc;
		}
		void show_p()
		{
			cout<<" puFFy " <<p<<endl;
		}


};

int main()
{
	coPy c1(88,78),c2(66,55),c3(c1);
	c1.abc=100;
	c1.get_p();
	c1.show_p();
	c2.get_p();
	c2.show_p();


	c3.get_p();
	c3.show_p();

return 0;
}
