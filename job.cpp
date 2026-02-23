#include <bits/stdc++.h>
using namespace std;

int main () { 
    int age;
    cin >> age ;
    if (age <18){
        cout <<"Not eligible for job";
    }
else if ( age <= 55){
    cout <<"Eligibile for job";
    if (age >=52){
        cout << ",but retirement soon";
    }
}
 else {
    cout <<" retirement time ";
}
return 0; }

