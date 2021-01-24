

#include <bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}





int minDist(int a[], int n, int x, int y) {
        int pos1,pos2;
        int dist=9999;
         for(int i=0;i<n;i++)
         {
             if(a[i]==x)
             {
                 pos1=i;
             }
             else if(a[i]==y)
             {
                 pos2=i;
             }
             if(dist>abs(pos1-pos2))
             {
                 dist=abs(pos1-pos2);
             }
         }
         if(dist==9999)
         {
             return -1;
         }
         else
         {
             return dist;
         }
    

}
