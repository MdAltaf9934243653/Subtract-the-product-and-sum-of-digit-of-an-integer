//difference b/w product of digits and sums of digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int product=1;
    int sum=0;

    while(n!=0){
        int rem=n%10;
        product=product*rem;
        sum=sum+rem;
        n=n/10;

    }
    int answer =product-sum;
    cout<<answer;
    return 0;

} 
    
