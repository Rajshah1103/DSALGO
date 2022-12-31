#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <utility> 
using namespace std;
int main()
{
    // there are numerous ways for map this is one way #1
	// typedef map<string, int> mapType;
	// mapType populationMap;
 
	// populationMap.insert(pair<string, int>("Maharashtra", 123144223));
    // populationMap.insert(pair<string, int>("Rajasthan", 81032689));
    // populationMap.insert(pair<string, int>("Gujarat", 63872399));
    // populationMap.insert(pair<string, int>("Karanataka", 67562686));
    // populationMap.insert(pair<string, int>("Tamilnadu", 77841267));

	// mapType::iterator iter;
 	// // output the size of the map
	// cout << "Size of populationMap: " << populationMap.size() << '\n';
 	// for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
    // {
	// 	cout << iter->first<<": "<<iter->second<< " million\n";
	// }
	// string country("Gujarat");
	// iter = populationMap.find(country);
	// if( iter != populationMap.end() ) 
	// 	cout << country <<"'s populations is "<< iter->second << " million\n";
	// else
	// 	cout << "Key is not in populationMap" << '\n';


    // Second Way #2

    // typedef map<string,pair<int,int> > mpe;
    typedef map<string,int>mp;
    mp populationMap;
    populationMap.insert({"Maharashtra",90859509890});
    populationMap.insert({"Gujarat",90859509800});
    populationMap.insert({"Rajasthan",90859506790});
    populationMap.insert({"Chandigarh",90859545490});

    for(auto it : populationMap){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // mp ::iterator iter;
    // for(iter = populationMap.begin();iter!=populationMap.end();iter++){
    //     cout<<iter->first<<" "<<iter->second<<endl;
    // }
    string place = "Maharashtra";
   
    if(populationMap.find(place)!=populationMap.end()){
        cout<<"The Population of"<< place <<" is "<<populationMap[place]<<" million\n";
    }
    else{
        cout<<"Key is not in PopulationMap"<<'\n';
    }

    return 0;
 	
}