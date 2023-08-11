#include <bits/stdc++.h>
using namespace std;

// (1)- Check whether a no. is of power two
int check_power_of_two(int n)
{
    return (n && !(n & (n - 1)));
}

//No. of ones in binary representation on number

int countones(int n){
    int count = 0;
    while(n){
        count++;
        n = n&n-1;
    }
    return count;
}

int main()
{

    
    // cout << check_power_of_two(7) << endl;
    cout<<countones(25)<<endl;
    return 0;
}