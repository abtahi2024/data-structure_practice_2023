#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int v;
    Student(string name,int v)
    {
        this->name=name;
        this->v=v;
    }
};
class cmp
{
    public:
    bool operator()(Student a,Student b)
    {
        if(a.name>b.name)
        {
            return true;
        }
        else if(a.name==b.name)
        {
            if(a.v<b.v)
            {
                return true;
            }
        }
        
        
            return false;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int v;
        cin>>name>>v;
        Student obj(name,v);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().v<<endl;
        pq.pop();
    }
    


    return 0;
}

