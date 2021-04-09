#include "std_lib_facilities.h"

struct date
{
    int y;
    int m; 
    int d;  
};


void init_day(Date& dd, int y, int m, int d)
{

 if (m < 1 || m > 12)
  cout << "Error, invalid month." << endl;
 else if (d < 1 || d > 31)
  cout << "Error, invalid day." << endl;
 else
 {
  dd.y = y;
  dd.m = m;
  dd.d = d;
 }

 return;
}
void add_day(Date& dd, int n)
{
    dd.d += n;
    while(dd.d > 31)
  {
      ++dd.m;
      dd.d -= 31;
      if (dd.m == 13)
     {
           ++dd.y;
           dd.m = 1;
     }
   }        
}
ostream& operator<<(ostream& os, const Date& date)
{
    return os << '(' << d.y 
              << ',' << d.m 
              << ',' << d.d << ')';
}

int main()
{
    Date today( 1978, 6, 25 );
    Date tomorrow( today );
    add_day(tomorrow, 1);
    cout << today << '\n'
         << tomorrow << '\n';
 
    return 0;
}

