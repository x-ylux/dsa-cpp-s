#include<bits/stdc++.h>
using namespace std;
int main() {
    int x ;
    cin >> x;
    if (x <= 9) {
    cout << "number is 1 digit" ;}
    else if (x > 9 && x <= 99){
cout <<"number is dounle digit ";
    }
    else {
        cout << "number doesnt fit in the cirteria";
    }
   return 0; 
}