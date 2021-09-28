#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional> 
#include <time.h>

double start, finish, duration;

using namespace std;
int i, j, a;
int x, k;
int cnt=0, cnt2=0;
int main (){
   vector<int> X;
    scanf("%d",&x);
   // 1부터 x까지 생성
   for(int i=0; i<x; i++){
      X.push_back(i+1);
   }
   // 0과1을 저장 할 벡터 생성
   vector<int> ind;
   scanf("%d",&k);
   // k개의 1 추가
   for(int i=0; i<k; i++){
      ind.push_back(1);
   }
   // x-k개  0 추가  
   for(int i=0; i<X.size()-k; i++){
      ind.push_back(0);
   }
   //조합 
   do{
      // k부분집합 출력
      for(int i=0; i<ind.size(); i++){
         if(ind[i] == 1){
            printf("%02d", X[i]);
         }
        if(k==0){
         	printf("00");
         	break;
		 }
      }printf(" ");
      //k+1 부분집합 출력
   	int arr[x]={0,};
   	int cnt3=1;
      for( j=0;j<x-k;j++){      
      cnt2=0;
     cnt=0;   
         for(int i =0 ; i<ind.size(); i++){
            if(cnt2==k+1){
               break;
            }
            if(ind[i]==0){
               if(cnt==1){
                  continue;
               }
            if(arr[i]==1){
            continue;
            }
            cnt++;
            cnt2++;
            printf("%02d",X[i]);
            arr[i] = 1;
            }
            else if(ind[i]==1){
               printf("%02d",X[i]);
               cnt2++;
            }
         }
    if(cnt3<x-k){   
      	printf(" ");
      	cnt3++;
		  }
      }
      printf("\n");
   }while(prev_permutation(ind.begin(), ind.end()));

   return 0;
}
