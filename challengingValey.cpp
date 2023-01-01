#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int n;
	cin >> n;
	vector <int> arr;
	int count;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		if(i==0 || x!=arr.back()) {
			arr.push_back(x);
		}
	}
	count=0;
	for(int i=0; i<arr.size(); i++) {
		if(i==0) {
			if(arr[i]<arr[i+1]) {
				count++;
			}
		}
		else if(i==(arr.size()-1)) {
			if(arr[i]<arr[i-1]) {
				count++;
			}
		} else {
			if(arr[i-1]>arr[i] && arr[i]<arr[i+1]) {
				count++;
			}
		}
	}
	if(count<=1){
        cout << "YES" << endl;
    } 
	else{
        cout << "NO" << endl;
    } 


    }


}
