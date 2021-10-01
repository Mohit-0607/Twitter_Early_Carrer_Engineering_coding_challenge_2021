#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second<b.second);
}

int maxPresentations(vector<int> scheduleStart, vector<int> scheduleEnd){
    long long int n = scheduleStart.size();
    vector<pair<int,int> > vec;
    for(int i=0;i<n;i++){
        vec.push_back( make_pair(scheduleStart[i],scheduleEnd[i]) );
    }
    
    sort(vec.begin(), vec.end(), sortbysec);
    
    int j=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(vec[i].first>=vec[j].second){
            count++;
            j=i;
        }
    }
    
    return count;
    
}

int main() {
	int n;
	cin>>n;
	vector<int> scheduleStart;
	vector<int> scheduleEnd;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    scheduleStart.push_back(x);
	}
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    scheduleEnd.push_back(x);
	}

	
	
	
	int ans = maxPresentations(scheduleStart, scheduleEnd);
	cout<<ans;
	return 0;
}
