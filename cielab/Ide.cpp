#include <string>
#include <iostream>
using namespace std;


int main() {
    int A,B;
    cin>>A>>B;

    int diff = (A-B) % 10;
    if(diff == 9){
        cout << A-B-1 << endl;
    }else{
        cout << A-B+1 << endl;
    }

    return 0;
}
