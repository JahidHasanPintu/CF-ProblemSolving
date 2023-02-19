#include<bits/stdc++.h>
#define AC main()
using namespace std;
const int MYDD = 1103;
 
int AC {
//	while(1) {
		int k, r;
		// scanf("%d %d", &k, &r);
        cin>>k>>r;
		int temp = k % 10, ans = -1;
		for(int j = 1; j <= 10; j++) {
			if(temp*j % 10 == r || k*j % 10 == 0) {
				ans = j;
				break;
			}
		}
		printf("%d\n", ans);
//	}
	return 0;
}