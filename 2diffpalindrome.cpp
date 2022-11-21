#include <iostream>
using namespace std;

int main() {
	// your code goes here


    int t;  cin>>t;

    while(t--){

        int a,b; cin>>a>>b;

        if(a%2==1&&b%2==1){

            cout<<"no\n";

        }

        else if(a==1||b==1){

            cout<<"no\n";

        }

        else{

            cout<<"yes\n";

        }

    }

    return 0;

}
