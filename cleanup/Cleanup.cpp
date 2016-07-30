#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin>>T;

    for(int i = 0; i < T; i++){
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<int> jobs(n+1);
        fill(jobs.begin(), jobs.end(), 1);
        int comp;
        for(int a = 0; a<m; a++){
            cin>>comp;
            jobs[comp] = 0; 
        }

        int seen = 1;
        for(int d = 1; d <= jobs.size(); d++) {

            cout << seen % 2 << endl;
            cout <<  jobs[d] << endl;
            cout << " *** " << endl;
            if( jobs[d] == 1) {
                if(seen % 2 != 0) cout << d << " ";

                seen++;
            }

        }

        cout << endl;

        seen = 1;
        for(int d = 1; d <= jobs.size(); d++) {

            cout << seen % 2 << endl;
            cout <<  jobs[d] << endl;
            cout << " *** " << endl;
            if( jobs[d] == 1){ 
                if(seen % 2 == 0) cout << d << " ";

                seen++;
            }

        }
             
        cout << endl;
    }



    return 0;
}
