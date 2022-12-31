#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){ 
    // creation
    unordered_map<string,int>m;

    // insertion
    // 1st way of insertion
    pair<string,int> p = make_pair("Shah", 3);
    m.insert(p);
    // 2nd way of insertion
    pair<string,int>p2("Raj",2);
    m.insert(p2);
    // 3rd way of insertion
    m["mera"] = 1;
    
    // searching
    cout<<m["mera"]<<endl;
    cout<<m.at("Shah")<<endl;
    cout<<m.size()<<endl;
    // if you search for something which is not present in the map it will throw an error using at function
    // cout<<m.at("unknown")<<endl; this will generate an error 
    // cout<<m["unknown"]<<endl but this will by default give the value a key of 0 and  a new entry in the map is created

    // to check the presence of the key in the map 
    cout<<m.count("Raj")<<endl; // this will print one as raj is present only once in the map 
    cout<<m.count("missing")<<endl; // if the key is not present in the map by default the value is printed as zero as the count is  zero

    // to erase a key value pair from the map 
    cout<<m.erase("mera")<<endl;
    cout<<m.size();


return 0;
}