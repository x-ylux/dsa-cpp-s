#include<bits/stdc++.h>
using namespace std; //1d array
int main () {
    int arr[5];
     
    cin >> arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4 ];
    arr[3]+=7; /*you can directly perform mathematical functions on arrays,
   and you can change the value of array also for example arr[3]=16 
    THEN THE VALUE OF ARR3 WHICH was earlier 6 now becomes 16 */
    cout<< arr[3];
    return 0;
}
/*array is used to store data it have index or container which stores the given data 
in the conatiner and  container names starts from zero lets say if we have 5 entries then the
number of 1st,2nd,3rd,4th entry would be 0 ,1,2,3,4 respectively. 
*/
/*array elements are stored in consecutive memory address but dont know where the first which is 
0 will store it is random but 1234 will be stored right after each other in a consecutive manner */
