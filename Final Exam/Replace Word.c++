#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a; cin >> a;
    while(a--)
    {
        string n; cin >> n;
        string m; cin >> m;
        while(n.find(m) != -1)
        {
            n.replace(n.find(m), m.size(), "#");
        }
        cout << n << endl;
    }
    return 0;
}
