#include<bits/stdc++.h>

using namespace std;

#define ll long long //using ll as long long

ll power(ll number, ll exponent) { //function to calculate power
    if (exponent == 1) return number; //base case for num^1 = num
    if (exponent == 0) return 1; //base case for num^0 = 1
    ll temp = power(number, exponent / 2); //calculating temp = num^(expo/2)
    if (exponent % 2 == 0)
        return ((temp % 100000007) * (temp % 100000007) %
                100000007); //return temp*temp with modular operation in case of even exponent
    else
        return ((((temp % 100000007) * (temp % 100000007)) % 100000007) * number); //return temp*temp*num modular operation in case of odd exponent
}

int main() {
    ll number, exponent;
    cin >> number >> exponent;
    cout << power(number, exponent);
    return 0;
}