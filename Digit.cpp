/*Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.

Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?*/

#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int count = 0;
	    for(int i=x; i<=y; i++){
	        int dig = i%10;
	        if(((dig == 2) || (dig == 3)) || (dig == 9)){
	            count++;
	        }
	        else{
	            continue;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}