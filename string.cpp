#include<bits/stdc++.h>
using namespace std;
int main(){
    string s= "mahi";
    int len= s.size();
    s [len-3]='j';
    cout<< s[len-3];
    return 0;

}
// array is defined for numbers and string is defined for character and same properties apply for string as it were for array
//you cant write j with"J" beacuse it is a character so it should be stored like'j'