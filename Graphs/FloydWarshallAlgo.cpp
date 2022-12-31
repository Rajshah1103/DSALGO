#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{

    public:
        void shortest_distance(vector<vector<int>>&matrix){
            int n = matrix.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==-1){
                        matrix[i][j]=1e9;
                    }
                    if(i==j){
                        matrix[i][j]=0;
                    }   
                }
            }
            for(int k=0;k<n;k++){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
                    }
                }
            }

            for(int i=0;i<n;i++){
                if(matrix[i][i]<0){
                    cout<<"Negative Cycle"<<endl;
                }
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==1e9){
                        matrix[i][j]=-1;
                    }
                }
            }
        }

};

int main(){

return 0;
}

// the intution or the thought process for the floydWarshall
// step 1: first we need a adj Matrix for the graph
// step 2: traverse the adj Matrix and if any postion has value = -1 assign it a value of infinity in that case 1e9
// step 3: traverse the graph again via all nodes and find out the minmum value for that node 
// i.e.if matrix[i][j] = min(matrix[i][j],matrix[i][k]+matrix[k][j];
// traverse the graph again and if any negative value is found we cout Negative Cycle
// again we traverse the matrix if we find value of any position 1e9 we change it to -1