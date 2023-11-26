#include<iostream>
using namespace std;
#define MAX 50
class spiral
{

	private:
		int n;
		static int count;
		int arr[][MAX];
		
	public:
		void getSize()
		{
			cout<<"enter SPIRAL_MATRIX size"<<endl;
			cin>>n;
		}
		void showMatrix()
		{
			cout<<" SPIRAL_MARIX begins--"<<endl;
				cout<<endl;
			for(int i=0; i<n ;i++)
			{
				for(int j=0; j<n ;j++)
				{
					cout<<arr[i][j]<<"\t ";
				}
				cout<<endl;
				cout<<endl;
			}
				cout<<endl;
			cout<<" SPIRAL_MARIX ends--"<<endl;
		}
		void letsGo()
		{ 
			int r0,r1,r2,r3,c0,c1,c2,c3;
			int ns,os;
			count=1;
			os=n;
			ns=n;

			r0=0;
			c0=0;
			
			r1=1;
			c1=n-1;

			r2=n-1;
			c2=n-2;

			r3=n-1-1;
			c3=0;

			while( !((count) > (n*n) ))//u will have to take seprate variale to reprsent size for each loop 
			{
				for(;;)
				{
					cout<<"1-- r0="<<r0<<" c0="<<c0;
					arr[r0][c0++]=count;
					cout<<"  count="<<count<<endl;
					count++;
					if(c0 > n-1)
						break;
				}	
				r0++;
				c0=(os-1)-(ns-1)+1;
				cout<<"1  r0="<<r0<<" c0="<<c0<<endl;

				if( !(c0 ++ < (ns-1)) )
				{	
					cout<<" inside if for for loop  r0="<<r0<<" c0="<<c0<<endl;
					cout<<endl;
					break;
				}
				if(count > (n*n))
				{	cout<<" inside if for counting n r0="<<r0<<" c0="<<c0<<endl;
					break;
				}
				cout<<"/////////////////////////////"<<endl<<endl;
				//////////////////////////////////////////////////

				for(;;)
				{
					cout<<"2 --r1="<<r1<<" c1="<<c1;
					arr[r1++][c1]=count;
					cout<<"  count="<<count<<endl;
					count++;
					if(r1 >ns-1 )
						break;

				}
				r1=(ns-1)-1-1;	
				c1=(ns-1)-1;
				cout<<"2  r1="<<r1<<" c1="<<c1<<endl;
				if( !(((os-1)-(ns-1)) < r1 < (ns-1)) )
				{	cout<<" inside if for for loop  r0="<<r0<<" c0="<<c0<<endl;
					break;
				}
				if(count > (n*n))
				{
					cout<<" inside if for counting n r0="<<r0<<" c0="<<c0<<endl;
					break;
				}
				cout<<"///////////////////"<<endl<<endl;
				
				/////////////////////////////////////////////////////

				for(;;)
				{
					cout<<"3 -- r2="<<r2<<" c2="<<c2;
					arr[r2][c2--]=count;
					cout<<"   count="<<count<<endl;
					count++;
					if(c2 < 0 )
						break;
					
				}
				r2=(ns-1)-1;
				c2=(ns-1)-2;
				cout<<"3   r2="<<r2<<" c2="<<c2<<endl;
				if(!(((os-1)-(ns-1))< c2 < (ns-1)))
				{	
					cout<<"inside if for for loop  r2="<<r2<<" c2="<<c2<<endl;
					break;
				}
				if(count > (n*n))
				{	
					cout<<"inside if count  r2="<<r2<<" c2="<<c2<<endl;
					break;
				}
				cout<<"/////////////////"<<endl<<endl;
				/////////////////////////////////////////////////////////

				
				for(;;)
				{
					cout<<"4 -- r3="<<r3<<" c3="<<c3;
					arr[r3--][c3]=count;
					cout<<"   count="<<count<<endl;
					count++;
					if(r3<((os-1)-(ns-1)+1))
						break;
					
				}
				c3=(ns-1)-(os-1)+1;
				r3=(ns-1)-(os-1)+3;
				cout<<"4   r3="<<r3<<" c3="<<c3<<endl;
				if(!(((os-1)-(ns-1))< r3 < (ns-1)))
				{
					cout<<" inside if for for loop  r3="<<r3<<" c3="<<c3<<endl;
					break;
				}
				if(count > (n*n))
				{
					cout<<" inside if for count r3="<<r3<<" c3="<<c3<<endl;
					break;
				}
				cout<<"/////////////////"<<endl<<endl;
				/////////////////////////////////////////////////////////
				
				ns=os-1;
			
			}
		
			
			
		
		}
		
		
		
		
};

int  spiral::count;
int main()
{

	spiral SSS;
		SSS.getSize();
		SSS.letsGo();
		SSS.showMatrix();
return 0;
}
