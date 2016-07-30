#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin>>T;

    long long int N,P,Q;
    for(int i = 0; i < T; i++){
        cin>>N>>P>>Q;

        long long int A[N];

        for(int a = 0; a < N; a++){
            cin>>A[a];
        }
        sort(A, A+N);

        long long int tot = P + (Q*2);
        int b =0;
        int maxChilds =0;
        while(0 < tot && b < N){
            tot -= A[b];
            if(tot < 0) break;
            maxChilds++;
            if(tot == 0) break;

            b++;
        }
    
        cout << maxChilds << endl;
    
    }



    return 0;
}
