//write your code here
    long long int t,n,d,ndigits,temp,max,tens,i,j;
    long long int digits,bug;
    cin>>t;
    while(t--){
      cin>>n;
      ndigits=0;
      digits =0;
      temp =0;
      d = n;
      tens=1;
      i =1;
      j=1;
      while(d!=0){
        d = d/10;
        ndigits++;
      }
      tens = pow(10,ndigits);
      while(i<tens/10 && j<=ndigits){
        temp = temp + i*9;
        digits = digits +j*i*9; 
        i = i*10;
        j++;
      }
      bug = ndigits*(n-temp);
      digits = digits + bug;
      cout<<digits<<endl;
    }
