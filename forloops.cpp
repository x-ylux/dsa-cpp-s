/*for loop: Best for situations where the number of iterations is known in advance.
 It includes initialization, a condition, and an increment/decrement expression in a single line.*/
 #include<bits/stdc++.h>
 using namespace std;
 int main() { 
    int i;
   for (i = 1; i <= 9; i = i + 1) {
        cout << "mahi" <<i<< endl;
    }
    
    return 0;
}
/*if you directly write cout<<i<<endl; it will not print
the value of i, because i is limited to the for loop only because 
it is defined under () only , for printing value of i we need to
define int i seperately which is defined in line 6.*/
