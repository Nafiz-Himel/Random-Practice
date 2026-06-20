#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> asif;
    int asif_er_gf;

    while (cin >> asif_er_gf)
        asif.push_back(asif_er_gf);

    sort(asif.begin(), asif.end());
    
    int cnt = 0;
    for (int i = 0; i < asif.size(); i++) 
        if (asif[i] != asif[i-1])
            cnt++;

    cout << cnt;
    return 0;
}