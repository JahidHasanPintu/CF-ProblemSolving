#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int specialTicket=0,normalTicket=0;
    if(b<=a*m){
        specialTicket=n/m;
        int rem= n%m;
        if(b<=a*rem){
            specialTicket++;
        }else{
            normalTicket=rem;
        }
    }else{
        normalTicket=n;
    }
    int total = a*normalTicket + b*specialTicket;
    cout<<total<<endl;
//      If it is cheaper to use the special ticket for b rides than to buy a normal ticket b times, buy as many special tickets as possible
// 		If b <= a*m, then special_tickets = no of rides / special_tickets

// 		2. No of remaining rides = n (mod m), Check if it cheaper to buy a special ticket than to buy a normal ticket this many times, if yes, buy a special ticket
// 				if(b <= a*(n(mod m)), special tickets ++, 
// 		3. If not, normal tickets = n(mod m)

// 4. If it isn't cheaper to use special ticket for b rides, then buy n normal tickets.

// Total cost is a*(normal tickets) + b*(special tickets)

}
