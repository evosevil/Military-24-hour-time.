#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int r = 0,x=0;
    string hour;
    
    hour = s.substr(0, 2);          // 12
    stringstream hrs(hour);         // to convert int into str
    hrs>>x;                         // assigning the value of hrs to x

    if (s.find("PM") == 8 && x!=12)
    {
        //hrs section 
        r=x+12;
        string output = to_string(r) + s.substr(2,6);
        cout<<output;

    }
    else if((x==12) && (s.substr(8,10)=="AM")){
        cout<<"00"+ s.substr(2,6);
    }
    else{
        string op = s.substr(0,8);
        cout<<op;
    }
    return 0;
}