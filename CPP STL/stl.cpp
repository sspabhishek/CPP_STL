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
/*
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(8);
   // list<int>::iterator itr = ls.begin();
    ls.erase(ls.begin(),ls.end());
    for(auto i=ls.begin();i!=ls.end();++i)
    {
        cout<<*i<<" ";
    }

    //Rest function same as vector
    //begin,end,rbegin, rend, clear, insert, size, swap

}
*/
/*
//Deque
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(5);
    dq.push_front(32);
    dq.emplace_front(90);
    dq.pop_back();
    dq.pop_front();
    dq.back(); //This function returns a reference to the last element of the deque. Like front(), it does not remove the element from the deque. If the deque is empty, calling back() leads to undefined behavior.
    dq.front(); //This function returns a reference to the first element of the deque. It does not remove the element from the deque. If the deque is empty, calling front() leads to undefined behavior.
    for(auto it=dq.begin();it<dq.end();++it)
    {
        cout<<*it<<" ";
    }

     //Rest function same as vector
    //begin,end,rbegin, rend, clear, insert, size, swap

}
*/

//stack (LIFO : Last in First Out)
/*
int main()
{
    stack<int> st;
    st.push(1);
    //st.push(2);
    //st.push(3);
    //st.push(3);
    //st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    //cout<<st.top()<<endl;
    //cout<<st.size()<<endl;
    //cout<<st.empty()<<endl;//its return only true(1) or false(0)
    //cout<<st.top()<<endl;
    stack<int> st1,st2;
    st1.push(8);
    st2.push(12);
    cout<<st1.top()<<endl;
    cout<<st2.top()<<endl;
    st1.swap(st2);
    cout<<st1.top()<<endl;
    cout<<st2.top();


    //In stack all the operation are in O(1) time
}
*/

//Queue FIFO(First In First Out)
/*
int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(4); //{1,4}
    q.emplace(2);//{1,4,2}
    q.back() += 5; //It will add on back means last of the queue element // means here 2+5 = 7  //{1,4,7}
    cout<<q.front()<<endl;
    cout<<q.back();

    q.pop(); //{4,7}
    cout<<endl<<q.front();

    // size, swap, empty etc. same as stack
    // Time Complexity = O(1) same as stack

}
*/

//Priority queue

//In priority queue largest element on the top
/*
int main()
{
    //Max Heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(54);
    pq.push(34);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();

    //size, swap, empty etc same as others

    //Minimum Heap
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<<endl<<pq.top();


    //Complexity
    // push = log(n)
    // top = O(1)
    // pop = log(n)

}
*/

// Set
// set store in sorted order and only unique element
/*
int main()
{
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}
    st.insert(5); //{1,2,3,4,5}

    //Functionality of insert in vector can be used also, that only increases efficiency
    //begin(), end(), rbegin(), rend(), size(), empty() and swap are same as those of above
    for(auto i=st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    //system("cls");
    auto it = st.find(3); //find is a built-in function in C++ STL which returns an iterator to the element which is searched in the set container. If the element is not found,  then the iterator points to the position just after the last element in the set.
    cout<<endl<<distance(st.begin(), it) << endl;
    cout<<*it<<endl;
    //st.erase(1); //erase 4 // takes logarithmic time
    for(auto i=st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    int cnt = st.count(3);
    cout<<endl<<cnt<<endl;

    auto itr = st.find(3);
    st.erase(it); //It take constant time
    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5}
    for(auto i=st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //lower_bound() and upper_bound() function works in the same way as in vector it does.
    //This is the syntax
    auto it3 = st.lower_bound(4);
    auto it4 = st.upper_bound(5);
    st.erase(it3,it4); //{1}
    for(auto i=st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }

    //In set every things take (log n) time
}
*/

//Multiset
/*
int main()
{
    // Everything same as set
    // stores duplicati elements also
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}
    ms.insert(5); //{1,1,1,1,5}


    //ms.erase(1); // It will erase all 1 of the set

    // if you want only a single 1 erased
    //ms.erase(ms.find(1));


    //ms.erase(ms.begin(), ms.end());

    int cnt = ms.count(1);
    cout<<cnt<<endl;

    for(auto it : ms)
    {
        cout<<it<<" ";
    }

    //rest all function same as set
}
*/

//Unordered set
/*
int main()
{
    //lower_bound and upper_bound function does not works, rest all function\
    are same as above, it does not stores in any particular order it has a better\
    than set most cases, expect some when collision happens

    unordered_set<int> ust;
    ust.insert(34);
    ust.insert(9);
    ust.emplace(67);
    ust.erase(9);
    for(auto i:ust){
        cout<<i<<" ";
    }
}
*/

//Map Container
int main()
{

}
