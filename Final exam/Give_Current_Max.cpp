#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
    student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }

        else if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        return false;
    }
};
void insert(priority_queue<student, vector<student>, cmp> &pq)
{
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;
    student obj(name, roll, marks);
    pq.push(obj);
}
void println(priority_queue<student, vector<student>, cmp> pq)
{
    // priority_queue<student,vector<student>,cmp>pq;
    if (pq.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }
}
int main()
{

    int n;
    cin >> n;
    priority_queue<student, vector<student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        insert(pq);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            insert(pq);
            println(pq);
        }
        else if (c == 1)
        {
            //

            println(pq);
        }
        else if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                println(pq);
            }
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int roll;
//     int marks;
//     student(string name, int roll, int marks)
//     {
//         this->marks = marks;
//         this->roll = roll;
//         this->name = name;
//     }
// };
// class cmp
// {
// public:
//     bool operator()(student a, student b)
//     {
//         if (a.marks < b.marks)
//         {
//             return true;
//         }

//         else if (a.marks == b.marks)
//         {
//             if (a.roll > b.roll)
//             {
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }

//         return false;
//     }
// };
// int main()
// {
//     string name;
//     int roll, marks;
//     int n;
//     cin >> n;
//     priority_queue<student, vector<student>, cmp> pq;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> name >> roll >> marks;
//         student obj(name, roll, marks);
//         pq.push(obj);
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int c;
//         cin >> c;
//         if (c == 0)
//         {
//             cin >> name >> roll >> marks;
//             student obj2(name, roll, marks);
//             pq.push(obj2);

//             cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;

//         }
//         else if (c == 1)
//         {
//             if (pq.empty())
//             {
//                 cout << "Empty" << endl;
//             }
//             else
//             {
//                 cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//             }
//         }
//         else if (c == 2)
//         {
//             if (!pq.empty())
//             {
//                 pq.pop();
//                 if (pq.empty())
//                 {
//                     cout << "Empty" << endl;
//                 }
//                 else
//                 {
//                     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//                 }
//             }
//             else
//             {
//                 cout<<"Empty"<<endl;
//             }
//         }
//     }

//     return 0;
// }