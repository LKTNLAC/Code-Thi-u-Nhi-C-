#include <bits/stdc++.h>

using namespace std;

const int oo = 999999999;
typedef pair<int, int> ii;

vector<ii> a[1000000];
int n, k,flag,source;
int d[1000000];
int pre[1812];
int graph[14][14];
vector<int>path[1812]; //Lưu đường đi tới đỉnh i

void dijkstra() {
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    for (int i = 1; i <= n; i++)
        d[i] = oo;
    //d[1] = 0;
    //pq.push(ii(0, 1));

    d[source] = 0;
    pq.push(ii(0, source));

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

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("cruise.inp","r",stdin);
    freopen("cruise.out","w",stdout);
    int p, q, m, w;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>flag;
        if(flag == 0)
        {
            cin>>p>>q;
            //a[p].push_back(ii(0, q));
            //a[q].push_back(ii(0, p));
            //if(graph[p][q] != 0 && graph[p][q] != INT_MAX){
    		//	a[p].push_back(ii(graph[p][q], q));
    		source = p;
            dijkstra();
            if (d[q] == oo)
                cout<<-1<<endl;
            else
                cout<<d[q]<<endl;
        }
        else
        {
            cin>>p>>q>>w;
            a[p].push_back(ii(w, q));
            a[q].push_back(ii(w, p));
            //if(graph[p][q] != 0 && graph[p][q] != INT_MAX){
    		//	a[p].push_back(ii(/*graph[p][q]*/w, q));
            //}
        }
    }

    //dijkstra();
    //cout<<d[n];
}


