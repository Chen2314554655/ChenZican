#include "std_lib_facilities.h"

struct Date
{

	Date(int y, int m, int d);
	void add_day(int n);
	int y, m, d;
};


Date::Date(int y, int m, int d)
{
 if (m < 1 || m > 12)
  cout << "Error, invalid month." << endl;
 else if (d < 1 || d > 31)
  cout << "Error, invalid day." << endl;
 return;
}

void Date::add_day(int n)
{
    d += n;
	if (d > 31)
	{
	  ++m;
	  d-=31;
          if (m == 13)
	  {
	    ++y;
            m = 1;
          }
	}
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y 
              << ',' << d.m 
              << ',' << d.d << ')';
}

int main()
{

    Date today( 1978, 6, 31 );
    Date tomorrow( today );
    tomorrow.add_day(1);
    cout << today << '\n'
         << tomorrow << '\n';

    return 0;
}

