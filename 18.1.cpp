#include "std_lib_facilities.h"

// drill 1
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// drill 2
void f(int a[], int n)
{
// drill 3a
  int la[10];
// 3b
  for (int i = 0; i < n; ++i)
	  la[i] = ga[i];

// 3c
  for (int i = 0; i < n; ++i)
	   cout << la[i] << ", ";
	cout << endl;

// 3d
  int *p = new int[n];
// 3e
  for (int i = 0; i < n; ++i)
        p[i] = a[i];
// 3f
  for (int i = 0; i < n; ++i)
	   cout << p[i] << ", ";
	cout << endl;

// 3g
  delete[] p;
}


// drill 4
int main()
{
// 4a
    f(ga, 10);

// 4b
    int aa[10];
    int m = 1;
    for (int i = 0; i < 10; ++i)
    {
        m*= (i + 1);
        aa[i] = m;
    }

// 4c
    f(aa, 10);

return 0;
}


