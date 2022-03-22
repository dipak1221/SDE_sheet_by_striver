// Find Missing And Repeating
Approach 1 :

    count array -
    O(N) and
    Traverse - O(N)
    space compexity         - O(N)





Approach 2 :

    Sort it    -    O(nlogn)
    traverse(check adjacent value can find repeated value and comparing index can find missing value) -O(N)
        space complexity-    O(1)
    // but drawback actual array is changing






Approach 3 :
    // Drawback will not work for high input beacause square value can cause it
     arr  -  [ 1, 2, 2 ]
      x = missing value and y = repeating 1 + 2 + 3 - (1 + 2 + 2) = S here 3 - 4 =S // x-y=S 1st eq
                                                                                        1^2 + 2 ^ 2 + 3 ^ 2 - (1 ^ 2 + 2 ^ 2 + 2 ^ 2) = S^2 here 3^2 - 4^2 = S^2 // x^2-y^2=S^2 2nd eq
As compare this equation will give x+y=s1 
now compare 1st + 3rd equation here will get x and y separate  
// code
int *findTwoElement(int *arr, int n) {
        long long int sum=(n*(n+1))/2;
        long long int sum_sq=(n*(n+1)*(2*n+1))/6;
        
        int s1,s2,x,y;
        for(int i=0;i<n;i++){
            sum-=arr[i];
            sum_sq-=arr[i]*arr[i];
        }
       // sum=abs(sum);
       // sum_sq=abs(sum_sq);
        
        s1=sum_sq/sum;
        x=(s1+sum)/2;
        y=s1-x;
        
        return new int[2]{y,x};
    }






Approach 4:

using xor

 int *findTwoElement(int *arr, int n) {
        int xor1=arr[0];
        for(int i=1;i<n;i++)
        {   xor1=xor1^arr[i];
            
        }
        for(int i=1;i<=n;i++)xor1=xor1^(i);
        
    int rightmostbit = xor1 & ~(xor1-1);
    
    int x=0,y=0;
    
        for(int i=0;i<n;i++)
        {   
            if(arr[i] & rightmostbit)
            x=x^arr[i];
            else y=y^arr[i];
            
            if(rightmostbit & (i+1))x=x^(i+1);
            else y=y^(i+1);
            
        }
        int flag=1;
        for(int i=0;i<n;i++){
            if(x==arr[i])flag=0;
        }
        if(flag)swap(x,y);
        return new int[2]{x,y};
    }

