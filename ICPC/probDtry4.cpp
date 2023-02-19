#include <iostream>
using namespace std;

int main()
{
    long long T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        long long A, B, C, k;
        cin >> A >> B >> C >>k;
        long long large=0;
        
        if(large<A){
            large=A;
        }
        if(large<B){
            large=B;
        }
        if(large<C){
            large=C;
        }
        long long diff1=large-A;
        long long diff2=large-B;
        long long diff3=large-C;
        cout << "Case " << i << ": ";
        if(diff1%k==0 and diff2%k==0 and diff3%k==0 ){
            cout << "Peaceful" << endl;
        }else {
            cout << "Fight" << endl;
        }

    }
    return 0;
}