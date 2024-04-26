// Provides Solution of various pattern based probelms in c++
// Link : https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/



#include<iostream>
using namespace std;

void pattern_box(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    
}

void stairs(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    
}

void stairs_count(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
          cout<<j+1;
        }
        cout<<endl;
    }
    
}

void stairs_same(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
          cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
}

void stairs_reverse(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
          cout<<"* ";
        }
        cout<<endl;
    }
    
}

void stairs_reverse_count(int n){
    
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
          cout<<j+1<<" ";
        }
        cout<<endl;
    }
    
}

void pyramid(int n){
    
    for(int i =0; i<n;i++)
    {
        for (int k=0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        
        for (int j =0; j < 2*i+1; j++)
        {
          cout<<"*";
        }

        for (int k=0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        cout<<endl;

    }
}



void pyramid_inverse(int n){
    
    for(int i =0; i<n;i++)
    {
        for (int k=0; k < i; k++)
        {
            cout<<" ";
        }
        
        
        for (int j =0; j <2*n - (2*i+1); j++)
        {
          cout<<"*";
        }

        for (int k=0; k < i; k++)
        {
            cout<<" ";
        }
        
        cout<<endl;

    }
}
    
void diamond(int n){
    for(int i =0; i<n;i++)
    {
        for (int k=0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        
        for (int j =0; j < 2*i+1; j++)
        {
          cout<<"*";
        }

        for (int k=0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        cout<<endl;

    }
    for(int i =0; i<n;i++)
    {
        for (int k=0; k < i; k++)
        {
            cout<<" ";
        }
        
        
        for (int j =0; j <2*n - (2*i+1); j++)
        {
          cout<<"*";
        }

        for (int k=0; k < i; k++)
        {
            cout<<" ";
        }
        
        cout<<endl;

    }
}

void diamond_half(int n){
    for(int i=1; i<=2*n-1; i++ ){
        int state=i;
        if (i > n) state = 2*n-i;
        for (int j = 1; j <=state; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

int main()
{
    int n;cin>>n;


    // pattern_box(n);
    // cout<<endl;

    // stairs(n);
    // cout<<endl;

    // stairs_count(n);
    // cout<<endl;

    // stairs_same(n);
    // cout<<endl;

    // stairs_reverse(n);
    // cout<<endl;

    // stairs_reverse_count(n);
    // cout<<endl;

    // pyramid(n);
    // cout<<endl;

    // pyramid_inverse(n);
    // cout<<endl;

    // diamond(n);
    // cout<<endl;

    diamond_half(n);
    cout<<endl;

    return 0;
}