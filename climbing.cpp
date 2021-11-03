#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, pair<int, int> > a,
			 pair<int, pair<int, int> > b)
			 {
			 	if(a.first == b.first){
			 		if(a.second.first == b.second.first)
					 	return a.second.second < b.second.second;
					else if (a.second.first!=b.second.first){
				 		return a.second.first < b.second.first; 
					}	
				 }
				 else
					return a.first < b.first;
			 }

int main(){
	int n;
	vector<pair<int, pair<int, int> > > b;
	
	cin >> n;
	
	int a, a1, a2, a3, s1, s2;
	for(int i=0; i<n ; i++)
	{
		cin >> a >> a1 >> a2 >> a3;
		
		s1 = a1 * a2 * a3;
		s2 = a1 + a2 + a3;
		b.push_back(pair<int, pair<int, int> >(s1, pair<int, int>(s2, a)));
	}
	sort(b.begin(), b.end(),compare);
	for(int i=0; i<3; i++)
	{
		printf("%d", b[i].second.second);
		if(i!=2)
		{
			printf(" ");
		}
	}
	cout << endl;
	return 0;
}
