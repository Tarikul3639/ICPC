
/*##################################################################
 #                   Bismillahir Rahmanir Rahim                    #
 #                         ALLAHU AKBAR                            #
 #                                                                 #
 #                  ***Author : TARIKUL ISLAM                      #
 #        Bangladesh University of Business and Technology,(BUBT)  #
 #                      ** Dept.of CSE.                            #
###################################################################*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn '\n'
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define pb push_back
#define asort(a) sort(a.begin(), a.end())
#define areverse(a) reverse(a.begin(), a.end())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sp " "
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define removeDublicate(v) v.erase(unique(v.begin(), v.end()), v.end());

/*The requirement for this problem is as simple as it can be.
You will be given a sequence of N integers: P1, P2, … , Pn.
You have to find the number of possible pairs (Pi, Pj) such that: i ≠ j and A ≤ Pi+Pj ≤ B where A and B are two integers.*/

int main()
{


    int t = 0;
    cin >> t;
    int i=1;
    while(t-->0)
    {
        int n, A, B;
        cin >> n >> A >> B;

        vector<int> v(n);

        for(int i = 0; i < n ; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += upper_bound(v.begin(), v.end(), B - v[i]) - v.begin();
            ans -= lower_bound(v.begin(), v.end(), A - v[i]) - v.begin();
            if (A <= 2 * v[i] && 2 * v[i] <= B)
            {
                ans--;
            }
        }
        cout << "Case " << i << ": " << ans / 2 << "\n";
    }

    return 0;
}
