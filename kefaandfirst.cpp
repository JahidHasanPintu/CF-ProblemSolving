#include <bits/stdc++.h>
using namespace std;
// int solve(vector<int> A){
//    int n = A.size();
//    int y = A[0];
//    int d = 1;
//    int c = 1;
//    for (int i = 1; i < n; i++){
//       int x = A[i];
//       if (x >= y)
//          d++;
//       else
//          d = 1;
//       y = x;
//       c = max(c, d);
//    }
//    return c;
// }
int main(){
//     int n; cin>>n;
//    vector<int> A ;
//    for (int i = 1; i <= n; i++)
//         A.push_back(i);
//    cout << solve(A) << endl;
int n;
	std::cin >> n;

	std::vector<int> earnings(n);

	int current_earning = earnings[0]; 
 	int final_count = 1; 
  	int local_count = 1; 

	for (int i = 1; i < n; i++) 
	{
    	if (earnings[i] > current_earning) 
    	{
      		 
      		local_count++;
      		current_earning = earnings[i];
    	} 
    	else 
    	{
      		
      		local_count = 1;
      		current_earning = earnings[i];
    	}

    	// update final count if local count is greater than final count
    	if (local_count > final_count) 
    	{
      		final_count = local_count;
    	}
	}
	std::cout << final_count << "\n";
}