#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    char name[1000];
    char section;
    int marks;

    student(int i, const char n[1000], char s, int m)
    {
        id = i;
        strcpy(name, n);
        section = s;
        marks = m;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b;
    char c;
    char d[1000];
    cin>>a, cin>>d, cin>>c, cin>>b;
    student s1(a,d,c,b);
    cin>>a, cin>>d, cin>>c, cin>>b;
    student s2(a,d,c,b);
    cin>>a, cin>>d, cin>>c, cin>>b;
    student s3(a,d,c,b);
    if(s1.marks>=s2.marks && s1.marks>=s3.marks)
    {
        cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
    }
    else if(s2.marks>=s1.marks && s2.marks>=s3.marks)
    {
        cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
    }
    else if( s3.marks>=s1.marks && s3.marks>=s2.marks )
    {
        cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
    }
    }
}
