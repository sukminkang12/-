#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int N,K;
	scanf("%d %d",&N,&K);
	int coin[11];
	coin[10] = 0;
	for(int i=0;i<N;i++){
		scanf("%d",&coin[i]);
	}
	int count=0;
	int start=0;
	for(int i=0;i<N;i++){
		start = i;
		if(coin[start+1]>K){
			break;
		}
	}
	//printf("%d",start);
	while(K!=0){
		if(K<coin[start]){
			start--;
			continue;
		}
		//printf("\n%d\n",K);
		K -= coin[start];
		count++;
	}
	printf("%d",count);
}
