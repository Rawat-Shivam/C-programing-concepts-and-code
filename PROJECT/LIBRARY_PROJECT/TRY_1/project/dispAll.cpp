#include"header.cpp"
#include"declaration.cpp"
#include"class.cpp"



void Library::dispAll( )
{
	char buff[MAX];

	int b_count = this->nob;
	int i=1;
	cout<<"BEGIN:"<<__func__<<endl;

	ifstream b_ifile("books.dat",ios::binary);

//	ifstream d_ifile("dvd.dat");
//	ifstream p_ifile("periodicals.dat");
	
	b_ifile.getline(buff,MAX,'\n');

    //  this->b = new book;

	while(b_ifile.good())
	{
		if(i>b_count)
			break;

		cout<<"["<<i++<<"],";

		if()

	b_ifile.getline(buff,MAX,'\n');
	cout<<buff;

	//-------------------------------------------------------------------//	
		
	// this is not possible .....since object IO works between binary&object;
	// but data in file is in not in binary
	//
	//	b_ifile.read(reinterpret_cast<char*>(this->b),sizeof(this->b));
		
	//	cout<<this->b;
	
	//-------------------------------------------------------------------//	
	
	
	//-------------------------------------------------------------------//	
	
	}
	cout<<endl;
	cout<<"END:"<<__func__<<endl;
	
	
	
	
	
	
}
