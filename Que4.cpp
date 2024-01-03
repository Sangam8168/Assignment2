#include<iostream>
using namespace std;
void print8(int n){
    for (int i=1; i<=n; i++){
        
        for (int j=1; j<=i-1; j++){
            cout<< "  ";
        }
        for (int j=n; j>=i; j--){
            cout<< "* ";
        }
        
        cout<<endl;
    }
}
int main(){ 
    int n;
    cin>> n;
    print8(n);
}
