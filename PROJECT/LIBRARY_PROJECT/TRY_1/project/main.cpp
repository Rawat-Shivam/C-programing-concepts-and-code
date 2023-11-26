#include"header.cpp"
#include"class.cpp"
#include"declaration.cpp"

using namespace std;
int Library::nob=3; //no of books (lets assume )

static int f=1;

int main()
{
	int choice;
	Library user;
	choice=mainMenu();

	switch(choice)
	{
		case 0:
			exit(EXIT_SUCCESS);
			break;

		case 20:
			//check in //only change book status

			ofstream b_ofile("books.dat");
			if(f==1)
			{
				b_ofile<<"NUM_ITEM"<<' ';
				f=0;
			}
			b_ofile<<nob<<'\n';
			b_ofile<<'\n';

			close(b_ofile);
			
			user.checkInBook(); 

			break;
		case 1:
			user.dispAll(); 
			break;
		
	}


return 0;
}
