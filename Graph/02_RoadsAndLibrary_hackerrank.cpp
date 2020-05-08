
#include<bits/stdc++.h>
using namespace std;

class Edge{
public:
    int v,w;

    Edge()
    {
        v = 0;
        w = 0;
    }

    Edge(int val,int wt)
    {
        this->v = val;
        this->w = wt;
    }

};

// vector<vector<Edge*>> graph (7,vector<Edge*>()); No of vertices predefined
vector<vector<Edge*>> graph;

void addEdge(int u,int v,int w)
{
    // if(u<0 || v<0 || u>=graph.size() || v>=graph.size()) return ;

    graph[u].push_back(new Edge(v,w));
    graph[v].push_back(new Edge(u,w));
}

std::vector<int> v;

void Connected()
{
    int cntConnected = 0;
    vector<bool> isVisited(graph.size(),false);

    for(int i =0;i<graph.size();i++)
    {
        queue<int> q;
        if(isVisited[i]) continue;
        int vtx = 0;

        cntConnected++;
        // cout<<"Connected Component "<<cntConnected<<" : "<<endl;

        q.push(i);

        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            if(!isVisited[cur]) vtx++;
            isVisited[cur] = true;
            for(Edge*c : graph[cur])
            {
                if(!isVisited[c->v])
                {
                    q.push(c->v);
                }
            }

        }
        v.push_back(vtx);
        
    }

    // cout<<cntConnected;
}

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n,r,lib,road;
        cin>>n>>r>>lib>>road;

        for(int i = 0;i<n;i++) // No of vertices given other than 7
        {
            vector<Edge*> v;
            graph.push_back(v);
        }

        for(int i =0;i<r;i++)
        {
            int u,v;
            cin>>u>>v;
            addEdge(u-1,v-1,1);
        }

        Connected();
        long long int ans = 0;

        for(int i  =0;i<v.size();i++)
        {
            ans+= min(road*(v[i]-1) + lib,v[i]*lib);

        }

        // cout<<endl;

        cout<<ans<<endl;
        graph.clear();
        v.clear();
    }

}
// #include <bits/stdc++.h>
// using namespace std;

// class Edge
// {
// // public:
//     int v = 0;
//    // int w = 0;

//     Edge(int val)
//     {
//         this->v = val;
//        // this->w = wt;
//     }

//     Edge()
//     {
//     }
// };

// vector<vector<Edge *>> graph;

// void addedge(int u, int v)

// {

//     if (u < 0 || v < 0 || u > graph.size() || v > graph.size())
//         return;

//     graph[u].push_back(new Edge(v));
//     graph[v].push_back(new Edge(u));
// }


// int Connected()
// {
//     int cntConnected = 0;
//     vector<bool> isVisited(graph.size(), false);

//     for (int i = 1; i <= graph.size(); i++)
//     {
//         queue<int> q;
//         if (isVisited[i])
//             continue;

//         cntConnected++;
//        // cout << "Connected Component " << cntConnected << "  :  ";

//         q.push(i);

//         while (!q.empty())
//         {
//             int cur = q.front();
//             q.pop();
//             if (!isVisited[cur])
//                 // cout << cur << " ";
//             isVisited[cur] = true;
//             for (Edge *c : graph[cur])
//             {
//                 if (!isVisited[c->v])
//                 {
//                     q.push(c->v);
//                 }
//             }
//         }
//         //cout << endl;
//     }

//     return cntConnected;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//     int n,m;
//     long long int clib,croad;
//     cin>>n>>m>>clib>>croad;
//      for(int i = 1;i<=n;i++) 
//     {
//         vector<Edge*> v;
//         graph.push_back(v);
//     }

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         addedge(u,v);
//     }

//     if(croad>=clib || n==1 || m==0 ){
//         if(m>0){
//         cout<<clib*n<<endl;
//         }
        
//     }
//     else{
//         int cnt=Connected();
//        // cout<<cnt<<endl;
//         cout<<cnt*clib +(n-cnt)*croad<<endl;
    
//     }
//     }
//     return 0;
// }
