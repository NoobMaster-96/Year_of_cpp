#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// Algo works in O(n) time and O(n) space.

int TaxiReq(int n, vector<int> &a){ // returns the min no of cars req as an integer.
	int NoOfCars = 0;
	unordered_map<int,int> freqcounter; // the groups can only be of 1,2,3or4 people. freqcounter stores the no of groups with 1,2,3or4 people.
	for(int i=0;i<n;i++){
		freqcounter[a[i]]++;
	}
	NoOfCars += freqcounter[4]; // as one car can contain at most 4 people therefor every group of 4 people needs a seperate car.
	int temp = min(freqcounter[3],freqcounter[1]);// we find the min of 3's and 1's group as if we pair a group of 3 with a group of 1 it will completely fill a car.
	freqcounter[3] -= temp;
	freqcounter[1] -= temp;
	NoOfCars += temp;
	//now if any group of 3's are left they need there seperate car as they cannot be paired with group of 2's
	NoOfCars += freqcounter[3];
	temp = freqcounter[2]/2; // now we pair 2 groups of 2's together for optimal sol
	NoOfCars += temp;
	freqcounter[2] -= temp*2;
	if(freqcounter[2]==1){ // check if a single group of 2 is remaining
		if(freqcounter[1]>0){
			if(freqcounter[1]>=2){
				freqcounter[1] -= 2;
			}
			else{
				freqcounter[1] = 0;
			}
			NoOfCars += 1;
		}
		else{
			NoOfCars += 1;
		}
	}
	temp = freqcounter[1]/4; // if there are still groups of 1's left pair 4 of them together.
	NoOfCars += temp;
	if(freqcounter[1]%4>0){
		NoOfCars++;
	}
	return NoOfCars;
}

int main(){
	int n; // total no of groups
	cin>>n;
	vector<int> a(n); // no of members in each group
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<TaxiReq(n,a);
}