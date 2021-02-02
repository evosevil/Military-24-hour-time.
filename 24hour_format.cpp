#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "07:05:45PM";
    int x = 0;
    string hour;

    // cout<<"Enter time: ";
    // getline(cin,s);

    if (s.find("PM") == 8)
    {
        //hrs section 
        hour = s.substr(0, 2);
        stringstream hrs(hour);
        hrs>>x;
        x=x+12;
        string output = to_string(x) + s.substr(2,6);
        cout<<output;

    }
    return 0;
}