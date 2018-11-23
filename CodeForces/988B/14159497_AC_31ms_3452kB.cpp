#include <bits/stdc++.h>
using namespace std;
struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};
int main() {
	vector<string>v;
	int n;
	string s;
	compare c;
	scanf("%d",&n);
	cin.ignore();
	for(int i = 0 ; i < n ; i++){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),c);
	bool b=true;
	for(int i = 1 ; i < n ; i++){
		if(!strstr(v[i].c_str(),v[i-1].c_str())){
			bool c=false;
			for(int j=i+1; j<n ; j++){
				if(strstr(v[j].c_str(),v[i-1].c_str())){
					swap(v[j],v[i]);
					c=true;
					break;
				}
			}
			if(!c){b=false;break;}
		}
	}
	if(b){
		printf("YES\n");
			for(int i = 0 ; i < n ; i++){
				cout<<v[i]<<"\n";
			}
	}
	else printf("NO");
	return 0;
}