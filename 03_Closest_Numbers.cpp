#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void closestNumbers(vector<long long int> numbers){
    long long int N = numbers.size();
    sort(numbers.begin(),numbers.end());
    long long int minDiff = INT_MAX;
    for (long long int i = 0; i < N - 1; i++){
        minDiff = min(minDiff,numbers[i+1]-numbers[i]);
    }
    for (long long int i = 0; i < N - 1; i++) {
        if (numbers[i+1]-numbers[i] == minDiff){
            cout<<numbers[i]<<" "<<numbers[i+1]<<endl;
        }
    }
}

int main() {
	long long int n;
	cin>>n;
	vector<long long int> vec;
	for(int i=0;i<n;i++){
	    long long int x;
	    cin>>x;
	    vec.push_back(x);
	}
	closestNumbers(vec);
	return 0;
}
