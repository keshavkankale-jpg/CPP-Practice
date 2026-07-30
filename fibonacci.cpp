#include <iostream>
#include <climits>
using namespace std;

void fibonacci(int n){

    long long int t1=0;
    long long int t2=1;

    if(n<=0){
        cout<<"please enter only valid positive value ";
        return ;
    }

    if (n==1){
        cout<<t1<<" ";
        return ;
    }

    cout<<t1<<" "<<t2<<" ";


    for(int i=3; i<=n; i++){
        if (t1 > LLONG_MAX - t2 ) {
            cout<<"Limit reached! Numbers are too big to calculate further."<<endl;
            break;
        }
        long long int t3=t1+t2;

        cout<<t3<<" ";

        t1=t2;
        t2=t3;
    } 

}
int main () {

    int n;

    cout<<"Enter the value of n : ";

    cin>>n;

    fibonacci(n);

    return 0;
}