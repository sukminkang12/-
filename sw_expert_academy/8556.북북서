/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << " " << c;               // float 변수 2개 출력하는 예제
// cout << d << " " << e << " " << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin>> T;
	int test_case;
	string str="";
	int count =0;
	int total_ja;
	int total_mo;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> str;
		total_mo = 1;
		for(int i=str.size()-1;i>=0;i--){
			if(count ==0){
				if(str.at(i) == 'n'){
					total_ja = 0;
					count++;
				}
				else if(str.at(i) =='w'){
					total_ja = 90;
					count++;
					
				}
			}
			else{
				if(str.at(i)== 'n'){
					total_ja *= 2;
					total_mo *= 2;
					total_ja -= 90;
					
				}
				else if(str.at(i)== 'w'){
					total_ja *= 2;
					total_mo *= 2;
					total_ja += 90;
				}
			}
		}
		for(int i=1;i<=total_mo;i++){
			if((total_ja%i==0)&&(total_mo%i==0)){
				total_ja /= i;
				total_mo /= i;
			}
		}
		count =0;
		if(total_mo == 1){
			cout<<"#"<<test_case<<' '<<total_ja<<endl;
		}
		else{
			cout<<"#"<<test_case<<' '<<total_ja<<'/'<<total_mo<<endl;
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
