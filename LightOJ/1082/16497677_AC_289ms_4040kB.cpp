#include <bits//stdc++.h>
using namespace std;
#define MAXN 100010
typedef long long int i64;

int N[MAXN];
int tree[4*MAXN];

i64 query(int node,int start,int end,int i,int j){
	if(i > end || j < start)return INT_MAX;
	if(start >= i && end <= j)return tree[node];
	int left=node*2, right=left+1, parent=(start+end)/2;
	return min(query(left,start,parent,i,j) , query(right,parent+1,end,i,j));
}
void build(int node, int start, int end){
	if(start==end){
		tree[node] = N[start];
		return;
	}
	int left=node*2, right=left+1, parent=(start+end)/2;
	build(left, start, parent);
	build(right, parent+1, end);
    tree[node] = min(tree[left], tree[right]);
}
int main() {
	int t,n,q,q1,q2,ans;
	scanf("%d",&t);
	for(int i = 1; i <=t ; i++){
		scanf("%d %d",&n,&q);
		printf("Case %d:\n",i);
		for(int j = 1; j <= n ; j++)scanf("%d",&N[j]);
		build(1,1,n);
		for(int j = 0; j < q ; j++){
			scanf("%d %d",&q1,&q2);
			ans=query(1,1,n,q1,q2);
			printf("%d\n",ans);
		}
		//memset(tree,0,sizeof(tree));
	}
	return 0;
}