using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,k=1,sum=0,i,j;
        cin>>n>>s;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        i=0,j=0;
        while(k==1&&i<=n&&j<=i)
        {
            if(sum<s)
            {
            sum+=a[i];
            i++;
            }
            if(sum>s)
            {
            sum-=a[j];
            j++;
            }
            if(sum==s)
            {
                
                cout<<j+1<<" "<<i<<endl;
                
                k=0;
            }
        }
        if(k==1)
        {
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}
