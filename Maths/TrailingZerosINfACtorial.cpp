//http://www.mytechinterviews.com/how-many-trailing-zeros-in-100-factorial#:~:text=Each%20pair%20of%202%20and,in%20100%20factorial%20is%2024.

#include<bits/stdc++.h>
using namespace std;
int trailingZero(int n){
  int count=0;
  for(int i=5;i<=n;i=i*5){
    count+=n/i;
  }
  return count;
}
int main(){
  int n;
  cin>>n;
  cout<<trailingZero(n)<<endl;
}
