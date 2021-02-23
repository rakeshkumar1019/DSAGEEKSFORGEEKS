#include<bits/stdc++.h>
using namespace std;
bool palidromeDigit(int N){
  if(N>=0 && N<=9)return false;
  int n=N;
  int rev=0;
  while(n>0){
    rev=rev*10+(n%10);
    n=n/10;
  }
  return (N==rev)?true:false;
}
int main(){
  int n;
  cin>>n;
  (palidromeDigit(n))?cout<<"True":cout<<"False";
}
