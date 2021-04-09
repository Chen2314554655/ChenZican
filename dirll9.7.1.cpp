#include "std_lib_facilities.h"

enum class Month 
{
     jan, feb, mar, apr, may, jun, july, aug, sept, oct, nov, dec
};

Month operator++(Month& m)
{
   m = (m == Month::dec) ? Month::jan : Month(int(m) + 1);
   return m;
}

vector<string> months
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

ostream& operator<<(ostream& os, Month m)
{
   return os << months[int(m)];
}

class Date {
private:
    Year y;
    Month m;
    int d; 
public:
    Date(): y(1978), m(Month::jun), d(25) {}

    Date(Year yy, Month mm, int dd): y(yy), m(mm), d(dd)
    {
        if (d < 0 || d > 31)
            error("invalid day");
    }

	Year get_year() const { return y; }
	Month get_month() const { return m; }
	int get_day() const { return d; }

	void add_day(int n)
	{
         d += n;
         while(d > 31)
          {
              ++m;
              d -= 31;
              if (m == Month::jan)
            {
                 ++y;
            }
          }        

      };

ostream& operator<<(ostream& os, const Date& date)
{
	return os << date.get_year() << ". "
		<< date.get_month() << " "
		<< date.get_day() << ".";
}

int main()
try {
    Date today(1978, Month::jun, 25);
	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << today << endl << tomorrow << endl;
	return 0;
}
