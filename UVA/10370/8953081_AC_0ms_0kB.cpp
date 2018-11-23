#include <iostream>
using namespace std;

int main() {
	int test;
	scanf("%d",&test);
	while(test--){
		int stu,sum=0,count=0;
		double avg,ans;
		scanf("%d",&stu);
		int numbers[stu];
		for(int i=0 ; i<stu ;i++){
			scanf("%d",&numbers[i]);
			sum+=numbers[i];
		}
		avg=sum/(double)stu;
		for(int j=0 ; j<stu ;j++){
			if(numbers[j]>avg){
				count++;
			}
		}
		ans=(count*100)/(double)stu;
		printf("%.3lf%\n",ans);
	}
	return 0;
}