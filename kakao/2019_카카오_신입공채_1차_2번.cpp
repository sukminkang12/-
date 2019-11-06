#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
	
	float arr[501] ={0,};
	int total = stages.size();
	int temp = 0;
	float max = -1;
	int max_index = 0;
	vector<int> answer;
	for(int i=0;i<stages.size();i++){
		arr[stages.at(i)] += 1;
		
	}
	
	for(int i=1;i<=N;i++){
		temp = arr[i];
		if(total == 0){
			arr[i] = 0;
		}
		else{
			arr[i] = (float)temp/total;
		}
		total -= temp;
	}
	for(int j=1;j<=N;j++){
		for(int i=1;i<=N;i++){
			if(max < arr[i]){
				max = arr[i];
				max_index=  i;
			}
		}
		answer.push_back(max_index);
		arr[max_index] = -1;
		max = -1;
	}
    return answer;
}

int main(){
	int N = 4;
	vector<int> stages;
	stages.push_back(1);
	stages.push_back(1);
	stages.push_back(1);
	stages.push_back(1);
	stages.push_back(1);

	
	solution(N,stages);
}
