#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

struct Node {
    int value;
    vector<int> next;
};

int main() {

    ifstream fin("closefar.in");


    int T;
    fin>>T;
    Node * pointer = new Node[T];
    for(int i = 1; i <= T; i++){
        fin>>pointer[i].value; 
    }

    for(int i = 1; i <= T-1; i++){
        int index;
        fin>>index;
        int n;
        fin>>n; 
        pointer[index].next.push_back(n);
    }

    int Q;
    fin>>Q;

    for(int i = 0; i < Q; i++){
        char type;
        int low,hight;
        fin>>type>>low>>hight;
        int res;

        int a = low;
        int ne;
        cout << " type : " << type << endl;
        cout << " low : " << low << endl;
        cout << " hight : " << hight << endl;
        if(type == 'C'){
            res = 999999;
            while(a != hight) {
                //while(!pointer[a].next.empty()){
                 //   ne = pointer[a].next.back();
                  //  pointer[a].next.pop_back();
                    //cout << " actual " << a << endl;
                  //cout << " actual next size : " << pointer[a].next.size() << endl;
                for(int z = 0; z < pointer[a].next.size(); z++){
                    ne = pointer[a].next[z];
                   // cout << " next " << ne << endl;
                    //cout << pointer[ne].value << " - " <<  pointer[a].value;
                    //cout << " = " << pointer[ne].value - pointer[a].value;
                    //cout << " ** " << endl;
                    res = min(res, pointer[ne].value - pointer[a].value);
                    if(ne == hight) break;
                }

                a = ne;
            }
        }else if( type == 'F'){
            res = 0;
            while(a != hight) {
                for(int z = 0; z < pointer[a].next.size(); z++){
                    ne = pointer[a].next[z];
                //while(!pointer[a].next.empty()){
                 //   ne = pointer[a].next.back();
                  //  pointer[a].next.pop_back();
                    res = max(res, pointer[ne].value - pointer[a].value);
                    //a = ne;
                    if(ne == hight) break;
                }

                a = ne;
            }

        }

        cout << res << endl;
    }


}
