#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> books;
vector<int> day;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        if(n==1){
            cout<<n<<endl;
            cout<<n<<" "<<n<<endl;
            continue;
        }
        books.clear();
        day.clear();
        day.push_back(1);
        day.push_back(2);
        if(n&1==1){
            day.push_back(n);
            n--;
        }
        books.push_back(day);
        for(int i=3;i<n;i+=2){
            day.clear();
            day.push_back(i);
            day.push_back(i+1);
            books.push_back(day);
        }
        int ans = books.size();
        cout<<ans<<endl;
        for(int i=0;i<ans;i++){
            cout<<books[i].size()<<" ";
            for(int j=0;j<books[i].size();j++){
                cout<<books[i][j];
                if(j==books[i].size()-1){
                    cout<<endl;
                }
                else{
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}