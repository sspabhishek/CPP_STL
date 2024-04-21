#include<bits/stdc++.h>
using namespace std;

/*
// Pair
int main()
{
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p1={7,{6,9}};
    cout<<p1.first<<" " <<p1.second.first<<" " <<p1.second.second<<endl;

    pair<int,int> arr[] = {{54,44},{12,53},{65,86},{45,63}};
    cout<<arr[1].first;
}
*/


//Vector
/*
int main()
{
    vector<int> v;
    v.push_back(24);
    v.emplace_back(45);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    vector<pair<int,int>> vec;
    vec.push_back({23,87});
    vec.emplace_back(87,90);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<endl;
    }
}
*/
//Vector iterator
/*
int main()
{
    vector<int> v={12,32,4,2,54,23};
    vector<int> :: iterator it =v.begin();
    cout<<*it++<<endl;
    cout<<*it<<endl;

    vector<int> :: iterator i =v.end();
    cout<<*--i<<endl;

    //vector<int> :: iterator ri =v.rend(); //Not Clear
    //cout<<*ri<<endl;

    //vector<int> :: iterator ri= v.rbegin();  //Not Clear
    //cout<<*--ri<<endl;

    cout<<v[0] <<" "<<v.at(0)<<endl;

    for(vector<int>::iterator it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:v)
    {
        cout<<it<<" ";
    }
   //cout<<v[0];
}
*/
//deletion in vectors
/*
int main()
{
    vector<int> v={10,20,12,23,35};
    //v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}
*/
//Insert Function & Size in vector
/*
int main()
{
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
    vector<int>copy(3,50);
    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }

    //Size function
    cout<<endl<<v.size();

}
*/

//Some basic functions in vector
/*
int main()
{

    vector<int> v={10,20,30,70,80};
    v.pop_back();
    for(auto i=v.begin();i!=v.end();++i)
    {
        cout<<*i<<" ";
    }

    //Swap
    cout<<endl;
    vector<int>v1={10,20};
    vector<int>v2={30,40};
    v1.swap(v2);
    for(auto i=v1.begin();i!=v1.end();++i)
    {
        cout<<*i<<" ";
    }
    v1.clear(); //erases the entire vector
    cout<<endl<<v1.empty(); //return 1 (true) or 0 (false)
}
*/

//List :
//List container is similar to the vector
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(8);
    list<int>::iterator itr = ls.begin();
    ls.erase(ls.begin(),ls.end());
    for(auto i=ls.begin();i!=ls.end();++i)
    {
        cout<<*i<<" ";
    }

}
