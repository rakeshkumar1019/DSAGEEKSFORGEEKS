 int decodeWays(string str,int n){
	       long long int mod=1000000007;
	        int count[n+1];
	        count[0]=1;
	        count[1]=1;
	        if(str[0]=='0')return 0;
	        for(int i=2;i<=n;i++){
	            count[i]=0;
	            if(str[i-1]>'0'){
	                count[i]=count[i-1];
	            }
	            if(str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<'7')){
	                count[i]=(count[i]%mod+count[i-2]%mod)%mod;
	            }
	        }
	        return count[n];
	    }
		int CountWays(string str){
		   int n=str.length();
		   if(n==0)return 0;
		   if(str[0]=='0')return 0;
		   return decodeWays(str,n);
		}
