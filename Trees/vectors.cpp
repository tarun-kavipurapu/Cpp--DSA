#include <bits/stdc++.h>
using namespace std;
int main()
{
    //! vector is basically a dynamic aarray which doubles it size evrytime
    //! Creating dynamically
    //?(vector <int> *vp = new vector<int>();)

    //! staticcally allocation
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back();//!removes last element

    //! dont use this for insertion of elements only updation 
   /*  v[3] = 1234;
    v[4] = 1235; */
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v.at(i);
    }
    //! use v[] for only (updation and getting) of the data not insertion of the data into the vector because it disrupts the memor allocation of the vector
    cout << " " << endl;
    cout << v[1] << endl;
    cout << v.at(1)<< endl;//!does same job as v[1] and gives error if you are acessing out of bounds unlike []
    //?v.at() is much safer to use.

    //? lets do a experiment 
    vector <int> vi;
    for (int  i = 0; i < 100; i++)
    {
     cout<< "cap:"<<vi.capacity()<<endl;
     cout<< "Size:"<<vi.size()<<endl;
     vi.push_back(i+1);
    }
    //! observe that when size == capacity then capacity is doubled
    

    return 0;
}