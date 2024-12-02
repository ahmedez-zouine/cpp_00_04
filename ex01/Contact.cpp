#include "Contact.hpp"

class Contact
{
	private:
		string fname;
		string lname;
		int phonenuber;
		string nickname;

	public:
		Contact(string fn, string ln, string nickn, int phonen)
		{
			fname = fn;
			lname = ln;
			nickname = nickn;
			phonenumber = phonen;
		}
		int IsValidData(Contact c)
		{
			c.getFname();
		}

}
