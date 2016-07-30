#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int T;
    cin>>T;

    int N,K;
    for(int i = 0; i < T; i++){
        cin>>N>>K;
        int A[N+1];
        int squal[N+1];
        fill(A, A+N+1, 0);
        fill(squal, squal+N+1, 0);

        int s;
        for(int a = 1; a <=N ; a++) {
            cin>>s;
            if( s != a){
                A[s]++; 
            }else{
                squal[s] = 1; 
            }
        }

        int size = 0;
        for(int a = 1; a <=N ; a++) {
            if(A[a] >= K && squal[a] == 0) size++;
        }

        cout << size << endl;

    }



    return 0;
}
