#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int n;
   vector<int> A;
   vector<vector< double> > A_aver(3);
   //vector<vector <int> > ind(2);
   int a, cnt=0;
   scanf("%d", &n);
   
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a);
      A.push_back(a);
   }
   
   for(int i=0; i<n;i++)
   {
      double sum =0;
      double aver =0;
      for(int j=i;j<n;j++)
      {
         sum += A[j];
         aver = sum/(j-i+1);
         A_aver[0].push_back(aver);
         A_aver[1].push_back(i);
         A_aver[2].push_back(j);
      }   
   }
   
   for(int i=0; i<A_aver[0].size(); i++)
    {
       
       if(A_aver[0][i]==(int)A_aver[0][i])
       {
          //cout<<A_aver[0][i]<<A_aver[1][i]<<A_aver[2][i]<<endl;
          for(int j=A_aver[1][i]; j<=A_aver[2][i];j++)
         {
            if(A_aver[0][i]==A[j])
            {
               cnt++;
               break;
            }   
         }   
      }
    }
    cout<< cnt<<endl;
    return 0;
}
   
