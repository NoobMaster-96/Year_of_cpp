#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class solution{

	int N;
	vector<int> data;
	int *newarr;

public:

	solution(int n){
		N = n;
		newarr = new int[N];
	}

	void takeinput(){
		int temp;
		for(int i=0;i<N;i++){
			cin>>temp;
			data.push_back(temp);
		}
	}

	int mergeSort(){
		return _mergeSort(0,N-1);
	}

	int _mergeSort(int left, int right){
		int mid, inv_cnt = 0;
		if(right>left){
			mid = (right+left)/2;
			inv_cnt += _mergeSort(left,mid);
			inv_cnt += _mergeSort(mid+1,right);
			inv_cnt += merge_and_count_inversions(left,mid+1,right);
		}
		return inv_cnt;
	}

	int merge_and_count_inversions(int left, int mid, int right){
		int i = left, j = mid, k = left;
		int inv_cnt = 0;
		while((i<=mid-1)&&(j<=right)){
			if(data[i]<data[j]){
				newarr[k] = data[i];
				k++;
				i++;
			}
			else{
				newarr[k] = data[j];
				k++;
				j++;
				inv_cnt += (mid-i);
			}
		}
		while(i<=mid-1){
			newarr[k] = data[i];
			k++;
			i++;
		}
		while(j<=right){
			newarr[k] = data[j];
			k++;
			j++;
		}
		for(int i=left;i<=right;i++){
			data[i] = newarr[i];
		}
		return inv_cnt;
	}
};

int main(){

	int n;
	cin>>n;
	solution s(n);
	s.takeinput();
	cout<<s.mergeSort();
}