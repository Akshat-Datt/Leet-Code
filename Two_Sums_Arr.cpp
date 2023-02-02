#include <iostream>
using namespace std;

int main(){
	int n, target;
	cin>>n;
	int nums[n];
	for(int k=0; k<n; k++){
		cin>>nums[k];
	}
	cin>>target;
    for(int i=0; i<n; i++){
        if(nums[i] > target){
            continue;
        }
        else if(nums[i] < target){
            for(int j=i+1; j<n; j++){
                if((nums[i] + nums[j]) == target){
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
            }
        }
    }
    return 0;
}