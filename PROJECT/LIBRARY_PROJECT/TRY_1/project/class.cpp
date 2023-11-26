#include"declaration.cpp"
#include"header.cpp"
	 
	//int Library::nob=2; //no of books

class Library
{
private:

	static int nob;//no of books

	typedef struct
	{
		int  status;// 0 :out, 1 :in.
		char aName[MAX];//authors name
		char year[MAX];// year(date) of release
		char bName[MAX];//book name
		char palce[MAX];// place of publish/release
		char pHouse[MAX];//publishing house		
	}book;
	
	//vector<book> b;
	
public:

	book b;
	Library();	
	void dispAll();
	void checkInBook();
	void checkOutBook();
	
};








