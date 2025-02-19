#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> r(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> r[i];
    }
    vector<bool> visited(n + 1, false); 
    ll stabilizationYear = 1;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
        int current = i;
        int cycleLength = 0;
   
        while (!visited[current]) {
        visited[current] = true;
        current = r[current];
        cycleLength++;
        }

        stabilizationYear = lcm(stabilizationYear, cycleLength);
        }
    }
    cout << stabilizationYear << "\n";
}
    return 0;
}