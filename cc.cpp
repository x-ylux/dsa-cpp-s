#include <iostream>
using namespace std;

int main() {
    int n = 44;      
    int sum = 0;   
    while (n > 0) {
    int digit = n % 10;  
    sum += digit;        
    n = n / 10;          
    }
    cout << "Ans: " << sum << endl;

    return 0;
}