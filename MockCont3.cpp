#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
int n,m,num[N],cnt[N],root[N];
int f[N],ans[N];
vector<int> a[N];
int find(int x){
    if(f[x]==x) return x;
    return f[x]=find(f[x]);
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>num[i];
        f[i]=i;
        a[i].push_back(i);
    }
    for(int i=1;i<=m;i++){
        int op,x,y;
        cin>>op>>x;
        if(op==2){
            cout<<a[find(x)].size()<<endl;
        }
        if(op==3){
            int tot=0;
            for(int j=0;j<a[find(x)].size();j++){
                tot++;
                if(tot==x){
                    cout<<a[find(x)][j]<<endl;
                    break;
                }
            }
        }
        if(op==1){
            cin>>y;
            int fx=find(x),fy=find(y);
            if(fx==fy) continue;
            if(num[fx]>num[fy]){
                f[fy]=fx;
                for(int j=0;j<a[fy].size();j++){
                    a[fx].push_back(a[fy][j]);
                }
            }
            else{
                f[fx]=fy;
                for(int j=0;j<a[fx].size();j++){
                    a[fy].push_back(a[fx][j]);
                }
            }
        }
    }
    return 0;
}
