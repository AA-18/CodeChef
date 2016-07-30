#include <iostream>
#include <algorithm>

using namespace std;

int N,K,L;

int GCD(int a, int b)
{
   if (b==0) return a;
   return GCD(b,a%b);
}

bool inArray(int a[], int n){

    for(int i = 0; i < N; i++){
        if(a[i] == n) return true;
    }


    return false;
}


int main (){
    int T;
    cin>>T;

    for(int a = 0; a < T; a++){
    cin>>N>>K>>L;
    int nums[N];
    fill(nums, nums+N, 0);

    for(int i = 0; i < N; i++){
        cin>>nums[i]; 
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int e = i; e < N; e++){
            int n = GCD(nums[i], nums[e]);
            if(!inArray(nums, n) && n <= L &&  1 <= n ) cnt++;
        }
    }

    if(cnt == 0) {
        for(int i = 0; i < N; i++){
            if(nums[i] <= L && 1 <= nums[i]) cnt++;
        }

    }

    cout << cnt << endl;
    }

    return 0;
}
