#include<bits/stdc++.h>
using namespace std;

int denomination[]
    = { 1, 5, 10, 20,100};
int n = sizeof(denomination) / sizeof(denomination[0]);
int findMin(int V)
{
    sort(denomination, denomination + n);
 
    // Initialize result
    vector<int> ans;
 
    // Traverse through all denomination
    for (int i = n - 1; i >= 0; i--) {
 
        // Find denominations
        while (V >= denomination[i]) {
            V -= denomination[i];
            ans.push_back(denomination[i]);
        }
    }
 
    // Print result
    return ans.size();
    // int count=0;
    // for (int i = 0; i < ans.size(); i++)
    //     // cout << ans[i] << " ";
    //     count
}
int main(){
    long long n; cin>>n;
    // int count=findMin(n);
    cout<<findMin(n)<<endl;
}