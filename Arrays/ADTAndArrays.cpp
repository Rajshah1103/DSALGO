// ADT : Abstarct Data Types
#include<iostream>
using namespace std;

class myArray{
    int total_size;
    int used_size;
    int*ptr;
    public:
        myArray(int Tsize,int Usize)
        {
            total_size=Tsize;
            used_size=Usize;
            ptr=new int[Tsize];
        }

        void setVal()
        {
            for(int i=0;i<used_size;i++)
            {
                cout<<"Enter The Value for " <<i+1<< " element "<<endl;
                cin>>ptr[i];
            }
        }

        void show()
        {
            for(int i=0;i<used_size;i++)
            {
                cout<<"The Value of " <<i+1<< " element is "<<ptr[i]<<endl;
            }
        }
};



int main(){
    myArray marks(20,5);
    marks.setVal();
    marks.show();
return 0;
}