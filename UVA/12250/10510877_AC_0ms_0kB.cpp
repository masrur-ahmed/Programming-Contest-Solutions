#include<bits/stdc++.h>
using namespace std;
int main(){   
    string s,s1;
    int cas = 1;
    while (getline(cin,s) && s!= "#")
    {
        
        
        if (s == "HELLO"){
            s1="ENGLISH";
            }
        else if (s == "HOLA"){
            s1="SPANISH";
            }
        else if (s == "HALLO"){
            s1="GERMAN";
            }
        else if (s == "BONJOUR"){
            s1="FRENCH";
            }
        else if (s == "CIAO"){
            s1="ITALIAN";
            }
        else if (s == "ZDRAVSTVUJTE"){
            s1="RUSSIAN";
            }
        else{
            s1="UNKNOWN";
        	}
        
        cout << "Case " <<cas <<": "<<s1<<"\n";    
        cas++;
     }

}