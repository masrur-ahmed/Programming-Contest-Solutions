 #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int cases;
        scanf("%d",&cases);
        for(int i=0;i<cases;i++)
        {
            int n,q;
            scanf("%d%d",&n,&q);
            map<long long int,int>aa;
            long long int bb[n+1];
            long long int temp,m,p,v;
            for(int k=1;k<=n;k++)
            {

                scanf("%lld",&bb[k]);
                aa[bb[k]]++;
            }
            for(int k = 1 ; k <= q ; k++){
            	scanf("%lld",&m);
            	if(m==2){
                    aa.erase(0);
            		printf("%d\n",(int)aa.size());
            	}
            	else{
            		scanf("%lld %lld",&p,&v);
            		aa[bb[p]]--;
            		aa[v]++;
            		if(aa[bb[p]]==0)aa.erase(bb[p]);
            		bb[p]=v;
            	}
            }
            aa.clear();
        }
    }
