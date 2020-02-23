#include<bits/stdc++.h>
using namespace std;

class lib{
public:
	int no_books;
	int signup;
	int bperday;
	vector<pair<int,int>> books;
};

int main(){
	int B,L,D;
	vector<int> score;
	vector<lib> libraries;
	ifstream myfile ("f_libraries_of_the_world.txt", ios::in);
	myfile >>B>>L>>D;
	for(int i=0;i<B;i++){
		int tmp;
		myfile >> tmp;
		score.push_back(tmp);
	}
	
	for(int i=0;i<L;i++){
		lib temp;
		myfile >> temp.no_books>>temp.signup>>temp.bperday;
		for(int j=0;j<temp.no_books;j++){
			int a;
			myfile >> a;
			pair<int,int> tmp = make_pair(score[a],a);
			temp.books.push_back(tmp);
		}
		libraries.push_back(temp);
	}
	vector<pair<int,int>> solve(L);
	for(int i=0;i<L;i++){
		int a = libraries[i].signup + ceil(libraries[i].no_books/libraries[i].bperday);
		int b = i;
		solve[i] = make_pair(a,b);
	}
	sort(solve.begin(),solve.end());
	
	ofstream file ("output6.txt");
	file << L <<"\n";
	for(int i=0;i<L;i++){
		int a = solve[L-1-i].second;
		file << a<<" "<<libraries[a].no_books<<"\n";
		sort(libraries[a].books.begin(),libraries[a].books.end());
		for(int j=0;j<libraries[a].no_books;j++){
			file<<libraries[a].books[libraries[a].no_books-1-j].second<<" ";
		}
		file<<"\n";
	}
	return 0;
}