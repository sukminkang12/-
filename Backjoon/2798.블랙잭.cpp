#include<iostream>

using namespace std;

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int card[N];
	for(int i=0;i<N;i++){
		scanf("%d",&card[i]);
	}
	int start =0;
	int sum=0;
	int sum_pre=0;
	int one=0;
	int two=1;
	int three=2;
	while(one!=N-2){
		if((one<N)&&(two<N)&&(three<N)){
			sum_pre = card[one]+card[two]+card[three];
			//printf("sumpre:%d\n",sum_pre);
		}
		if(sum_pre<=M){
			if((M-sum) > (M-sum_pre)){
			sum = sum_pre;
			}
		}
		if(three+1<N){
			three++;
			continue;
		}
		else if(three+1==N){
			two++;
			three = two+1;
			continue;
		}
		if(two+1==N){
			one++;
			two = one+1;
			three = one+2;
		}
		
	}
	printf("%d",sum);
	
	
}
