#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
for (int i = 0; i < n; ++i)
        os << a[i] << " , ";
     os << endl;
     }

void  print_vector(ostream& os, vector<int>& v)
{
for (auto e : v)
        os << e << " , ";
    os << endl;
    }

int main()
{
//drill 1
    int x = 7;
    int* p1 = &x;

//drill 2
    cout << p1 << " , " << *p1 << endl;

//drill 3
int array [7] = { 1,2,4,8,16,32,64 };
	int* p2 = array;

//drill 4
 print_array(cout, p2, 7);
	cout << "p2: " << p2 << endl;

//drill 5
    int* p3 = p2;

//drill 6
    p2 = p1;

//drill 7
    p2 = p3;

//drill 8
    cout << "p1: " << p1  << *p1 << endl;
    cout << "p2: " << p2  << *p2 << endl;
    
//drill 9

    
//drill 10
    p1 = new int[10]{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    
//drill 11
    p2 = new int[10];

//drill 12
    for (int i = 0; i < 10; ++i)
        p2[i] = p1[i];
    print_array(cout, p2, 10);
    
    delete p1;
    delete p2;

//drill 13
    vector<int> v10 = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    p1 = &v10[0];
//13.11. 
    vector<int> v11(10);
    p2 = &v11[0];
//13.12.
    v11 = v10;
    print_vector(cout, v11);
return 0;
}

