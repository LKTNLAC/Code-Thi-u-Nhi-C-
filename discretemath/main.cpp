#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <bits/stdc++.h>

using namespace std;



const int oo = 999999999;
typedef pair<int, int> ii;


vector<ii> a[1000000];
int n, k,flag,first,edge,i;
long xu[1000],xv[1000],xw[1000];
long long d1[1000000],d2[1000000],d[1000000];
int pre[1812];
//int graph[14][14];
//bool vis[1000000];
//long long res;
//vector<int>path[1812]; //Lưu đường đi tới đỉnh i


void dijkstra(int source) {
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    for (int i = 1; i <= n; i++)
        d[i] = oo;
    d[source] = 0;
    pq.push(ii(0, source));

    //Shortest
    while (pq.size()) {
        int u = pq.top().second;
        int du = pq.top().first;
        pq.pop();
        if (du != d[u])
            continue;


        for (int i = 0; i < a[u].size(); i++) {
            int v = a[u][i].second;
            int uv = a[u][i].first;
            if (d[v] > du + uv) {
                d[v] = du + uv;
                pq.push(ii(d[v], v));
            }
        }
    }
}

void check(long u, long v, long w, long long shortest, long long& ans, int start, int endd)
{
    if((d1[u] + d2[v] + w > shortest) && (d1[u] + d2[v] + w < ans) && (start != v) && (endd != u))
            ans = d1[u] + d2[v] + w;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("discrete.inp","r",stdin);
    freopen("discrete.out","w",stdout);

    //cout<<"Enter number of edges! ";
    cin>>n;
    //cout<<n<<endl;
    //cout<<"Enter number of vertices! ";
    cin>>k;
    //cout<<k<<endl;
    int p, q, m, w;
    for(i=1;i<=k;i++){
        cin>>p>>q>>w;
        a[p].push_back(ii(w, q));
        a[q].push_back(ii(w, p));
        xu[i]=p;
        xv[i]=q;
        xw[i]=w;
    }
    int start,endd;
    cin>>start>>endd;
    dijkstra(start);
    for(i=1;i<=n;i++)
        d1[i] = d[i];
    long long shortest = d[endd];
    dijkstra(endd);
    for(i=1;i<=n;i++)
        d2[i] = d[i];
    long long ans;
    //cout<<ans<<endl;
    for(i=1;i<=k;i++)
    {
        check(xu[i], xv[i], xw[i], shortest, ans, start, endd);
        //cout<<ans<<" ";
        check(xv[i], xu[i], xw[i], shortest, ans, start, endd);
        //cout<<ans<<" "<<endl;
    }

    if (d1[endd] == oo)
        cout<<-1<<endl;
    else
        cout<<"The shortest path: "<<endl;
        cout<<d1[endd]<<endl;
        cout<<"The second shortest path: "<<endl;
        cout<<ans<<endl;

    return 0;
}

