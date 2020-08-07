#include<iostream>
//#include<conio>
#include<vector>
using namespace std;

int digitSum(int x){
	int digit = 0;
	while(x > 0){
		digit = digit + (x%10);
		x = x/10;
	}
}
bool isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int N;
	cin >> N;
	vector<int> sum_of_digits;
	int answer = 0;
	for(int i = 0; i <= N; i++){
		sum_of_digits.push_back(digitSum(i));
	}
	for(int i : sum_of_digits){
		for(int j : sum_of_digits){
			if(i == j){
				continue;
			}
			else{
				int sum = i + j;
				if(isPrime(sum)){
					answer++;
				}
			}
		}
	}
	cout << answer;
	return 0;

}
