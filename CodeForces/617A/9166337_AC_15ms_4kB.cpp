  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {
      long long int dis,x;
      scanf("%lld",&dis);

      x=dis/5;
      if ( dis%5==0){
        printf("%lld\n",x);
  		}
      else{
        printf("%lld\n",x+1);
		}
      return 0;
  }