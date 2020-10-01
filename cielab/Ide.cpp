#include <string>
#include <iostream>
using namespace std;


int main() {
    int A,B;
    cin>>A>>B;
    // Checking the last number of difference of A and B.
    int diff = (A-B) % 10;
    if(diff == 9){
        // If last number of difference is 9 (like 499 , 999) , we will decrease it by one.
        cout << A-B-1 << endl;
    }else{
       // otherwise increase by one.
        cout << A-B+1 << endl;
    }

    return 0;
}
