#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct node{
  int E;
  int Wt;
};

 vector< std::vector<struct node*> > addEdge(int a, int b , int Wt ,vector< std::vector<struct node*> > Nodes){
  node *edge=new node;
  edge->E=b;
  edge->Wt=Wt;
  Nodes[a].push_back(edge);
  return Nodes;
}

int main(){
  int V;
  cin>>V;
  int flag=0;
  std::vector< std::vector<struct node*> > Nodes(V);
  while (flag!=1) {
    int a , b , Wt;
    cin>>a>>b>>Wt;
    Nodes=addEdge(a,b,Wt,Nodes);
    cin>>flag;
  }

}
