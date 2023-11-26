#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i, int c) {
         feet = f +c ;
         inches = i +c;
      }
      
      // overload function call
     void  operator()( int a, int b, int c) {
         
         // just put random calculation
         feet =  a+ c + 10;
         inches = a + b+ c + 100 ;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches << endl;
      }   
};

int main() {
   Distance D1, D2;
int a,b,c;
cout<<endl<<"enter three number at run time"<<endl;
cin>>a>>b>>c;
	
   cout << "-----------------: "<<endl; 
D1(a,b,c);

   D1.displayDistance();

   cout << "-----------------: "<<endl; 

   return 0;
}

