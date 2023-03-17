//           * * Bismillahir Rahmanir Rahim  * *
// ************************@Author*******************************
/*                    Asik Ifthaker Hamim                       */
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<ll,ll> pr;
#define pb push_back
#define sz(n) n.size()
#define vs(n) (int)n.size()
#define pp pop_back
#define sp(n) setprecision(n)
const int MOD = 1000000007;
#define ffor(a, b) for (int i = a; i <b; i++)
#define frev(b, a) for (int i = b; i >= a; i--)
#define PI (acos(-1.0))
#define torad(x) ((x)*((2*acos(0))/180.0))
#define todeg(x) ((x)*(180.0/(2*acos(0))))
#define fixAngle(x) ((x)>1?1:(x)<-1?-1:(x))
#define tan(a) tan(a)/(pi/180)
#define sin(a) sin(a)/(pi/180)
#define cos(a) cos(a)/(pi/180)
#define inverse_sin(a) asin(a)/(pi/180)
#define inverse_cos(a) acos(a)/(pi/180)
#define inverse_tan(a) atan(a)/(pi/180)
const int dr4[] = {0, 1, 0, -1};
const int dc4[] = {1, 0, -1, 0};
const int dr8[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dc8[] = {1, 1, 0, -1, -1, -1, 0, 1};
using namespace std;
double neg_infinity(-std::numeric_limits<double>::infinity());
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    string p;
    cin>>p;
    bool f=0;
    int pos=0;
    for(int i=0; i<s.size(); i++)
    {
        int count=0;
        for(int j=0; j<p.size(); j++)
        {
            if(s[i+count]==p[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==p.size())
        {
            f=1;
            pos=i;
            break;
        }
    }
    if(f==1)
        cout<<"Found at "<<pos+1<<endl;
    else
        cout<<"Not Found"<<endl;

}



