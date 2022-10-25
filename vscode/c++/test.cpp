#include <bits/stdc++.h>

using namespace std;

int cmp(string a, string b){
    
    while(a.size()>b.size()) b="0"+b;
    while(a.size()<b.size()) a="0"+a;
    if(a>b) return 1;
    if(a==b) return 0;
    return -1;
}
void ktr(){
    
	int vtr=0;
    string s,tmp;
	cin>>s;
	s+=".";
	for(int i=0;i<s.size();i++){
	    if(s[i]>='0'&&s[i]<='9') tmp.push_back(s[i]);
	    else if(s[i]=='.'){
	        vtr++;
	        if(tmp.length()>3||vtr>4){
	            cout<<"NO\n";
	            return;
	        }
	        else{
	            int tmp2=stoi(tmp);
	            if (tmp2>255){
	                cout<<"NO\n";
	                return;
	            }
	        }
	        tmp="";
	    }
	    else{
	        cout<<"NO\n";
	        return;
	    }
	}
	if(vtr==4) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
	    ktr();
	}
}//25525511135