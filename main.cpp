#include<bits/stdc++.h>
using namespace std;

int main(){
    string ch;
    int nb=0,i,n;
    cin >>n;
    cin >>ch;
    for (i = 0; i < n-1; i++)
    {
        if(ch[i]==ch[i+1]){
            nb++;
        }
    }
    cout<<nb<<endl;
    
    return 0;
}