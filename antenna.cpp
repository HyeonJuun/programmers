#include <iostream>
#include <vector>
#include <stdio.h>
#include <cmath>

using namespace std;

vector <long long int> X;
vector <long long int> Y;

int main(){

int n;
int i, j;
long long int x, y;
double result, dist;
 scanf("%d",&n);
 

 for(int i=0;i<n;i++){
   scanf("%d %d",&x, &y);
   X.push_back(x);
   Y.push_back(y);
}

vector <vector<double> >r(n, vector<double>(n,0));

vector<double>visited_dist;

for (int i=0; i<n; i++)
{
   for(int j=0; j<n ; j++)
   {
         dist = (X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]);
         r[i][j]= sqrt(dist)/2;  
   } 
}  

vector<int> visited;
visited.push_back(0);
vector<int> unvisited;
for(int i =1; i<n ; i++)
	unvisited.push_back(i);

 int cnt =1;
while(cnt<n)
	{
	long double min1 = 100000000000000;
	int min_ind = 0;	
		for(int i=0; i<cnt ; i++)
		{
			for(int j=0; j<n-cnt ; j++)
			{	
				if(min1>r[visited[i]][unvisited[j]]&&r[visited[i]][unvisited[j]]>0)
				{
					min1 = r[visited[i]][unvisited[j]];
					min_ind = j;
				}		
			}
		}
		visited_dist.push_back(min1);
		visited.push_back(unvisited[min_ind]);
		unvisited.erase(unvisited.begin() + min_ind);
		cnt++;
	}

double max= 0;
for(int i =0; i<n; i++){
	if(max<visited_dist[i]){
		max = visited_dist[i];
	}
}
printf("%lf", max);

return 0;
}
