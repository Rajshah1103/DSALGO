

// void sentinel(int arr[],int key,int size){
//     int start = arr[0];
//     arr[0] = key;
//     if(arr[0]==key){
//         cout<<"Element is present in the array"<<endl;
//     }
//     else{
//         cout<<"Element is not present"<<endl;
//     }
//     arr[0] = start;
// }

// int main(){
//     int arr[] = {10,20,30,40,50};
//     int size  = sizeof(arr)/sizeof(arr[0]);
//     sentinel(arr,10,size);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

struct employee{
    string name;
    int id;
};



void accept(employee obj[], int size){
    for(int i = 1;i<=size;i++){
        cout<<"Enter the name of employee "<<i<<endl;
        cin>>obj[i].name;
        cout<<"Enter the id of the employee" <<endl;
        cin>>obj[i].id;

    }
}

void search(string name,int id,employee obj[]){
    string first = obj[0].name;
    int uniqueId = obj[0].id;
    obj[0].name = name;
    obj[0].id  = id;
    if(name==obj[0].name && id==obj[0].id){
        cout<<"the employee data is present in the database";
    }
    else{
        cout<<"Invalid Employee Data"<<endl;
    }
}

int main(){
    typedef employee ep;
    int size= 0;
    cout<<"Enter the number of employees data you want to enter"<<endl;
    cin>>size;
    ep obj[size];
    accept(obj,size);
    search("Jack",1,obj);

    return 0;
}

