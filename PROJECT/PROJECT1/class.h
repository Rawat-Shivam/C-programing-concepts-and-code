class library
{
	private: 
		struct b{
			char authors[128];
			char Publication_date[11];
			char Title[128];
			char Publisher_location[81];
			char State[10];
		}book;
		struct p{
			char authors[128];
			char Publication_date[11];
			char Title[128];
			char Publisher_name[128];
			char State[10];
		}periodical;
		struct d{
			char artist[128];
			char Title[128];
			char Label[81];
			char Date[11];
			char State[10];
		}DVD;
	public:
		int mainMenu();
		int checkin_book();
		int checkin_periodical();
		int checkin_DVD();
		int display();
		int display_book();
		int display_periodical();
		int display_DVD();
		int checkout_book();
		int checkout_periodical();
		int checkout_DVD();
};
