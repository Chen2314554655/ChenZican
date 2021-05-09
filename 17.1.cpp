#include "std_lib_facilities.h"

//drill 4
void print_array10(ostream& os, int* a)
{
     for (int i=0;i<10;++i)
        os << a[i] << " , ";
    os << endl;
}
//dirll 7
void print_array(ostream& os, int* a, int n)
{
     for (int i=0;i<n;++i)
        os << a[i] << " , ";
    os << endl;
}


void print_vector(ostream& os, vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        os << v[i] << " , ";
    os << endl;
}

int main()
{
//drill 1
  int* array = new int[10];

//drill 2
  for (int i = 0; i < 10; ++i)
        cout << array[i] << " , ";
    cout << endl;
    

// drill 3
  delete[] array;
  

// drill 5
  int* array5 = new int[10];
  int x = 100;
  for (int i = 0; i < 10; ++i)
{
        array5[i] = x;
        ++x;
    }
  print_array10(cout, array5);
  delete[] array5;
  

// drill 6
  int* array6 = new int[11];
  x = 100;
  for (int i = 0; i < 11; ++i)
{
        array6[i] = x;
        ++x;
        cout << array6[i] << "  ";
    }
    cout << endl;
    delete[] array6;
    

// drill 8
  int* array8 = new int[20];

  for (int i = 0; i < 20; ++i)
{
        array8[i] = x;
        ++x;
}
  print_array(cout, array8, 20);
  delete[] array8;

// drill 10
  vector<int> v5(10);
  int y = 100;
  for (int i = 0; i < 10; ++i)
    {
        v5[i] = y;
        ++y;
    }
  print_vector(cout, v5);

  vector<int> v6(11);
  y = 100;
  for (int i = 0; i < 11; ++i)
    {
        v6[i] = y;
        ++y;
    }
  print_vector(cout, v6);

  vector<int> v8(20);
  y = 100;
  for (int i = 0; i < 20; ++i)
    {
        v8[i] = y;
        ++y;
    }
    print_vector(cout, v8);
return 0;

}
