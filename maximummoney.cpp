
question:https://practice.geeksforgeeks.org/problems/maximum-money2855/1/?company[]=Amazon&company[]=Amazon&problemStatus=solved&problemType=functional&page=1&sortBy=submissions&query=company[]AmazonproblemStatussolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazon


class Solution {
  public:
    int maximizeMoney(int N , int K) {
        int s=N%2;
        if(s==0)
        {
            return N/2*K;
        }
        else
        {
            return (N/2+1)*K;
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
