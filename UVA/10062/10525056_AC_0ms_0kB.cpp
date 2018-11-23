#include <bits/stdc++.h>

    using namespace std;
    bool toSort(pair<int,int>x, pair<int,int>y) {
	if (x.second<y.second) {
		return true;
	}
	else if (x.second == y.second) {
		if (x.first>y.first)
			return true;
		else
			return false;
	} else {
		return false;
	}
    }
 
int main() {
    string str;
    int k=0;
    while(getline(cin,str)){
     vector< pair<int,int> > v;
     //set<pair<int,int>>s;
     map<int,int>mp;
     for(int i=0 ;i<str.length();i++){
     	int x=str[i];
     	mp[x]++;
     }
     
     for (map<int,int>::iterator it = mp.begin(); it != mp.end(); it++) {
	v.push_back( make_pair(it->first,it->second));
     }
     sort (v.begin(), v.end(), toSort);
     //set< pair<int,int> >::iterator it;
    /*for(it=s.begin(); it!=s.end(); ++it)
    {
        cout<<it->second<<" "<<it->first<<endl;
    }*/
    k++;
    if(k!=1)printf("\n");
    for (int i=0;i<v.size();i++) {
	printf("%d %d\n",v[i].first,v[i].second);
       }
            
            //s.clear();
	mp.clear();
	v.clear();
    }
    
return 0;
}
