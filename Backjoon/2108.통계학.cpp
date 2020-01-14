#include<iostream>
#include<algorithm>
#include<math.h>
int arr[500000];
int freq_p[4001];
int freq_m[4001];
using namespace std;
int main(){
	int count=0;
	int sum=0;
	int sum_r=0;
	float sum_f=0;
	scanf("%d",&count);
	for(int i=0;i<count;i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
		if(arr[i]>=0){
			freq_p[arr[i]]++;
		}
		else{
			freq_m[abs(arr[i])]++;
		}
	}
	sum_r = sum/count;
	//printf("sum:%d\n",sum_r);
	sum_f = (float)sum/count;
	//printf("sum_f:%f\n",sum_f);
	if(fabs(sum_f-sum_r)>=0.5){
		if(sum<0){
			sum_r--;
		}
		else{
			sum_r++;
		}
	}
	sort(arr,arr+count);
	int mid = arr[count/2];
	int freq_number;
	int width;
	int most_count=0;
	int freq_n_2 = 0;
	int freq_count = 2;
	int freq_only=0;
	int freq_pre=-4001;
	for(int i=0;i<count;i++){
		if(arr[i]>=0){
			if(most_count<freq_p[arr[i]]){
				most_count = freq_p[arr[i]];
				freq_number = arr[i];
			}
		}
		else{
			if(most_count<freq_m[abs(arr[i])]){
				most_count = freq_m[abs(arr[i])];
				freq_number = arr[i];
			}
		}
	}
	
	for(int i=0;i<count;i++){
		if(arr[i]>=0){
			if(freq_p[arr[i]]==most_count){
				freq_only++;
				freq_number = arr[i];
			}
		}
		else{
			if(freq_m[abs(arr[i])]==most_count){
				freq_only++;
				freq_number = arr[i];
			}
		}
	}
	if(freq_only>1){
		for(int i=0;i<count;i++){
			if(arr[i]>=0){
				if(most_count == freq_p[arr[i]]){
					if(freq_pre != arr[i]){
						freq_count--;
						freq_pre = arr[i];
					}
				}
				if(freq_count == 0){
					freq_number = arr[i];
					break;
				}
			}
			else{
				if(most_count == freq_m[abs(arr[i])]){
					if(freq_pre != arr[i]){
						freq_count--;
						freq_pre = arr[i];
					}
				}
				if(freq_count == 0){
					freq_number = arr[i];
					break;
				}
			}
		}
	}
	
	printf("%d\n",sum_r);
	printf("%d\n",mid);
	if(count==1){
		width = 0;
	}
	else{
		width = (arr[count-1]-arr[0]);
	}
	printf("%d\n",freq_number);
	printf("%d\n",width);
}
