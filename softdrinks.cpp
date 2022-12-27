
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_am_of_drink = k*l;
    int total_slice_of_lime = c*d;
    int drink_available = total_am_of_drink/nl;
    int salt_available = p/np;
    int they_can_make;
    if(total_slice_of_lime<drink_available && total_slice_of_lime<salt_available){
        they_can_make= total_slice_of_lime;
    }else if(drink_available<total_slice_of_lime && drink_available<salt_available){
        they_can_make= drink_available;
    }else{
        they_can_make= salt_available;
    }

    int each_make = they_can_make/n;
    cout<<each_make<<endl;

}