#include <bits/stdc++.h>
using namespace std;
      
char data[45][45];
int n,m,t,memo[625][625];
string percurso,f1,f2;

int lcs(int i,int j)
{
    if(i<0 || j<0) return 0;
    if(memo[i][j]!=-1) return memo[i][j];
    if(f1[i]==f2[j]) return memo[i][j]=lcs(i-1,j-1) + 1;
    return memo[i][j]=max(lcs(i-1,j),lcs(i,j-1));

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin>>t;
    for(int z=1;z<=t;++z)
    {
        cin>>n>>m;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;++j)
            cin>>data[i][j];

        memset(memo,-1,sizeof memo);
        int tam1,tam2,x,y;

        cin>>tam1>>x>>y;
        if(tam1!=0) cin>>percurso;

        x--; y--; // primeira criança 
        f1.push_back(data[x][y]);
        
        for(int i=0;i<percurso.size();++i)
        {
            char key=percurso[i];
            if(key=='N') x-=1;
            else if(key=='S') x+=1;
            else if(key=='E') y+=1;
            else if(key=='W') y-=1;
            f1.push_back(data[x][y]);
        }

        cin>>tam2>>x>>y;
        if(tam2!=0) cin>>percurso;

        x--; y--; // segunda criança
        f2.push_back(data[x][y]);
        for(int i=0;i<percurso.size();++i)
        {
            char key=percurso[i];
            if(key=='N') x-=1;
            else if(key=='S') x+=1;
            else if(key=='E') y+=1;
            else if(key=='W') y-=1;
            f2.push_back(data[x][y]);
        }

        int resp=lcs(tam1,tam2);

        cout<<"Case "<<z<<": "<<tam1+1-resp<<' '<<tam2+1-resp<<'\n';
        f1.clear(); f2.clear();
    }

    return 0;
}
