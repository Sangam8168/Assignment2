#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = n / 2 + 1;
    int b = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= a; j++){
            cout << ("*	");
        }
        for (int j = 1; j <=b; j++){
            cout << ("	");
        }
        for (int j = 1; j <= a; j++){
            cout << ("*	");
        }

        cout << endl;
        
        if (i < n / 2 + 1){
           a--;
            b += 2;
        }else{
           a++;
            b -= 2;
        }
    }
}
