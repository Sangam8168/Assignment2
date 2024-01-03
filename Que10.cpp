#include<iostream>
using namespace std;
int main()
{   
    for(int j=0;j<2;j++){
        cout<<" "; 
    }
    for(int j=0;j<1;j++){
        cout<<"*";
    } 
    for(int j=0;j<2;j++){
        cout<<" ";
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<1-i;j++){ 
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=0;j<1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=0;j<1-2*i;j++){
            cout<<" ";
        }
         for(int j=0;j<1;j++){
            cout<<"*";
        }
         for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<2;j++){
        cout<<" "; 
    }
    for(int j=0;j<1;j++){
        cout<<"*";
    } 
    for(int j=0;j<2;j++){
        cout<<" ";
    }
    cout<<endl;
}
