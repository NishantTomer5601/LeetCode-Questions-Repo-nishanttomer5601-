class Solution {
public:


 
//    static bool cmp(pair<int,int> a,pair<int,int> b, int p){
//    // int p=powr;
//     return a.first*(a.second-p)> b.first*(b.second-p)>;
//   }



    long long minDamage(int p, vector<int>& d, vector<int>& h) {
        int tv=p;
        int n=d.size();
        vector<pair<long long,long long>> enem;
        for(int i=0;i<n;i++){
           // h[i]=(h[i]+p-1)/p;
            enem.push_back({d[i],(h[i]+p-1)/p});
        }

        sort(enem.begin(),enem.end(), [](pair<long long,long long> A,pair<long long,long long> B){
            int d1 = A.first;
            int d2 = B.first;
            int time1 = A.second;
            int time2 = B.second;
            //which one to kill first-> 
            long long damage1 = d1*time1 + d2*(time1+time2);
            long long damage2 = d2*time2 + d1*(time1+time2);
            return (damage1 < damage2);
            



        } );


        long long total_damage=0;

         long long  time=0;

        for(int i=0;i<n;i++){
            long long damageD=enem[i].first;
            time+=enem[i].second;
            //long long timeTaken=(healthR+p-1)/p;

            total_damage+=enem[i].first*time;

        }

        return total_damage;
        
    }
};