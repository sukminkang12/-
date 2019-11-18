#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int test_case;
	int T;
	unsigned long long n;
	cin>>T;
	unsigned long long R= 1;
	unsigned long long L =1;
	unsigned long long mid =1;
	unsigned long long p = 1;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		if(n==1){
			L = 1;
			R = 1;
		}
		else{
			mid += (unsigned long long)2*(n-1)*n;
			p = (n-1)*2;
			L = mid -p;
			R = mid +p;
		}
		cout<<"#"<<test_case<<" "<<L<<" "<<R<<endl;
		mid = 1;
		p = 1;
	}
    return 0;
}
