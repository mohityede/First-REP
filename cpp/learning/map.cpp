#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> m;

    m.insert(make_pair("Mohit",20));

    pair<string, int> p;
    p.first="Sakshi";
    p.second=16;
    m.insert(p);

    m["Kamla"]=38;
    m["Tilakchand"]=44;

    string k="Kamla";
    string s="Sakshi";
    string mk="Mohit";
    string t="Tilakchand";
    cout<<"age of "<<mk<<" is "<<m[mk]<<endl;
    cout<<"age of "<<s<<" is "<<m[s]<<endl;
    cout<<"age of "<<t<<" is "<<m[t]<<endl;
    cout<<"age of "<<k<<" is "<<m[k]<<endl;


    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }

    return 0;
}
