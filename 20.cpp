#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; i++)
        os << a[i] << " , ";
    os << endl;
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        os << v[i] << " , ";
    os << endl;
    return os;
}

ostream& print_list(ostream& os, list<int>& l)
{
    list<int>::iterator it;
    for (it = l.begin(); it!=l.end(); it++)
        os << *it <<" , ";
    os << endl;
    return os;
}

ostream& increase_list(ostream& os, list<int>& l, int n)
{
    list<int>::iterator it;
    for (it = l.begin(); it!=l.end(); it++)
        os << *it + n <<" , ";
    os << endl;
    return os;
} 

template<typename Iter1, typename Iter2> 
Iter2 copy(Iter1 f1, Iter1 e1, Iter2 f2)  
{
    if(f1 != e1)
        for (Iter1 p = f1; p != e1; p++)
        {
            *f2 = *p;
            f2++;
        }
    return f2;
}

int main()
{  //Remember to test after each step.

//drill 1
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_array(cout, a,10);

//drill 2
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_vector(cout, v);

//drill 3
    list<int> l = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print_list(cout, l);

//drill 4
    int a1[10];
    for (int i = 0; i < 10; i++)
        a1[i] = a[i];

    vector<int> v1 = v;
    list <int> l1 = l;

    print_array(cout,a1,10);    
    print_vector(cout, v1);
    print_list(cout, l1);  

//drill 5
    for (int i = 0; i < 10; i++)
        a[i] = a[i] + 2;
    print_array(cout, a,10);

    for (int i = 0; i < 10; i++)
        v[i] = v[i] + 3;
    print_vector(cout, v);

    increase_list(cout, l, 5);

//drill 7
    list<int> lis_a(a,a+10);
    std::copy(lis_a.begin(), lis_a.end(), v.begin());
    std::copy(l.begin(), l.end(), lis_a.begin());
    print_vector(cout, v);
    print_array(cout, a,10);
}

