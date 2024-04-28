// Gives total sum of all divisors of that number
// Link: https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720

// Time Limit Exceeded

 #include<iostream>
 using namespace std;


int sumOfDivisors(int n){
	int sum=0;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}


int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum= sum + sumOfDivisors(i);
	}

	return sum;
}
	
 int main()

 {
    int n;cin>>n;
    cout<<sumOfAllDivisors(n);
    return 0;
 }