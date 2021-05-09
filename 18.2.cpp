#include "std_lib_facilities.h"

// drill 1
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//drill 2
void f(vector<int>& v)
{
// 3a
   vector<int> lv(10);

// 3b
   lv = gv;

//3c
   for (int i : lv)
	    cout << i << ", ";
	cout << endl;

//3d
   vector<int> lv2 = v;

// 3e
   for(int i : lv2)
            cout << i << ", ";
	cout << endl;
}


// drill4
int main()
{
// 4a
    f(gv);

// 4b
    vector<int> vv(10);
    int m = 1;
    for (int i = 0; i < vv.size(); ++i)
    {
        m *= (i+1);
        vv[i] = m;
    }

// 4c
    f(vv);

return 0;
}



