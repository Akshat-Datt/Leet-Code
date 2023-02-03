/*The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.

The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.*/

#include <iostream>
using namespace std;

int main() {
    int n, diff, win;
    cin>>n;
	int arr[n], Arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i]>>Arr[i];
	}
	int sum = 0;
	int res = 0;
	int lead = 0;
	for(int j=0; j<n; j++){
	    sum = sum + arr[j];
	    res = res + Arr[j];
	    if(sum > res){
	        diff = sum - res;
	        if(diff > lead){
	            lead = diff;
	            win = 1;
	        }
	        else{
	            continue;
	        }
	    }
	    else if(res > sum){
	        diff = res - sum;
	        if(diff > lead){
	            lead = diff;
	            win = 2;
	        }
	        else{
	            continue;
	        }
	    }
	    else {
	        continue;
	    }
	}
	cout<<win<<" "<<lead<<endl;
	return 0;
}
