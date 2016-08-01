#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

long long int N,P,Q, maxChilds;

void solveByGreedy(vector<int> num){

    for(int change : num){
        long long removedFromTwos = 0; 
        if(change <= Q * 2){
            Q -= change / 2;
            removedFromTwos = change / 2;
            change %= 2;
        } else{
            // two are not enought
            change -= Q * 2;
            Q = 0; 
        }
        if( change <= P){
            P -= change; 
            change = 0;
            maxChilds++;
        }else{
            // ones not enought
            Q += removedFromTwos; 
        }
    
    }
}

int main(){
    int T;
    //ifstream fin("lumbybus.in");

    cin>>T;
    //fin>>T;
    

    for(int i = 0; i < T; i++){
        cin>>N>>P>>Q;
        //fin>>N>>P>>Q;


        vector<int> num;
        int x;
        for(int a = 0; a < N; a++){
            cin>>x;
            //fin>>x;
            num.push_back(x);
        }
        sort(num.begin(), num.end());

        maxChilds =0;
        solveByGreedy(num);
    
        cout << maxChilds << endl;
    
    }

    return 0;
}
