#include<iostream>
using namespace std;
int main() {
	long int sum1, sum2,invsum,sum3,t;
	cin>>t;
	while(t--)
	{
	    int n,s=0,c=0;
	  cin>>n;
	  int a[n];
	  for(int i=0; i<n; i++)
        cin>>a[i];

      sum1=a[0];
      for(int i=0; i<n; i++)
        {
            if(a[i]>0)
                c++;
        }
        if(c==0)
        {
            for(int i=1; i<n; i++)
                if(a[i]>sum1)
                    sum1=a[i];
            cout<<sum1;
            return 0;
        }
        else
        {
            for(int i=0; i<n; i++)
             {
                s=s+a[i];
                if(s<0)
                {
                    s=0;
                }
                if(s>sum1)
                    sum1=s;
            }
        }

        sum2=0;

        for(int i=0; i<n; i++)
        {
            sum2+=a[i];
            a[i]*=(-1);
        }
        invsum=a[0];
        s=0;
        c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
                c++;
        }
        if(c==0)
        {
            for(int i=1; i<n; i++)
                if(a[i]>invsum)
                    invsum=a[i];
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                s=s+a[i];
                if(s<0)
                {
                s=0;
                }
                if(s>invsum)
                    invsum=s;
            }
        }

        sum3=sum2+invsum;
        if(sum3>sum1)
            cout<<sum3<<endl;
        else
            cout<<sum1<<endl;
	}
	return 0;
}
