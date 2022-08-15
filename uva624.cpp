 #include <cstdio>
 #include <vector>
 
 using namespace std;
 
 int N, n, best;
 
 int tracks[30];
 vector<int> bestpath;
 
 void knapsack(vector<int> path, int sum, int id){
     if(sum > N) return;
 
     if(sum > best || (path.size() > bestpath.size() && sum == best)){
         best = sum;
         bestpath = path;
     }   
 
     if(id < n){ 
         path.push_back(tracks[id]);
         knapsack(path, sum + tracks[id], id + 1); 
         path.pop_back();
         knapsack(path, sum, id + 1); 
     }   
 }
 
 int main(){
     while(scanf("%d%d", &N, &n) == 2){ 
         best = 0;
 
         for(int i = 0; i < n; i++)  scanf("%d", &tracks[i]);
     
         vector<int> path;
         knapsack(path, 0, 0); 
 
         for(int i = 0; i < (int)bestpath.size(); i++) printf("%d ", bestpath[i]);
         printf("sum:%d\n", best);
 
     }   
 }
