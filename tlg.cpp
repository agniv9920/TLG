#include <iostream>
using namespace std;

int main()
{
    int n, p1, p2, w;            //declaring variables for number of rounds, scores of player 1 and 2 in the consecutive rounds and the win variable to declare the winner if it is player 1 or 2.
    int rsum1=0, rsum2=0, L=0;   //initializing running sum of player 1 and 2 as zero and the lead as zero
    
    cin>>n;                     //user input of number of rounds to be played
    
    //Iterating while loop till n not equal to zero i.e; the loop will terminate till when the number of rounds will become zero
    
    while(n!=0)
    {
        cin>>p1>>p2;
        //For calculating the leader in subsequent rounds we need to find running sum of the scores of both the players after each round.
        rsum1+=p1;
        rsum2+=p2;
        
        /*After calculating running sum we need to find the lead score in each round which will correspond to the leader player, also the winner will be the
        corresponding player of highest lead score found.*/
        
        if(rsum1>rsum2 && (rsum1-rsum2)>L)
        {
            L = rsum1-rsum2;
            w = 1;
        }
        if(rsum2>rsum1 && (rsum2-rsum1)>L)
        {
            L = rsum2-rsum1;
            w = 2;
        }
        
        //printing the running sum for convinience
        
        cout<<rsum1<<endl;
        cout<<rsum2<<endl;
        n--;
    }
    cout<<w<<" "<<L<<endl;       //printing the winner and his/her lead score. 
    
    return 0;
}
