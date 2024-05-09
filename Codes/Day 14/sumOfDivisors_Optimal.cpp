// Gives total sum of all divisors of that number
// Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// Optimal
 #include<iostream>
 using namespace std;

    long long sumOfDivisors(int N)
    {
        long long ans=0;
        for (int  i = 1; i <=N; i++)
        {
            ans+=(N/i)*i;
        }
        
        return ans;
    }
	
 int main()

 {
    int n;cin>>n;
    cout<<sumOfDivisors(n);
    return 0;
 }