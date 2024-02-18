// class Solution {
// public:
//     int mostBooked(int n, vector<vector<int>>& meetings) {
//         int m=meetings.size();
//         vector<int> room(n,0);
//         sort(meetings.begin(),meetings.end());
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         for(int i=0;i<n;i++){
//             if(i<m){
//             pq.push({meetings[i][1],i});
//             room[i]++;
//             }
//             else return 0;
//         }
       

        
//         for(int i=pq.size();i<m;i++){
//             int startTime=meetings[i][0];
//             int endTime=meetings[i][1];
//              int miniRoomFree=n;

            
//             while(!pq.empty() && pq.top().first<=startTime){
//                 miniRoomFree=min(miniRoomFree,pq.top().second);
//               pq.pop();
              
//             }
//             int prevEndTime=0;
//             if(!pq.empty())prevEndTime=pq.top().first;
            
           
//             if(prevEndTime>startTime)
//             endTime+=abs(prevEndTime-startTime);

            

//              int roomFree=0;
//              if(!pq.empty()) roomFree=pq.top().second;

//              miniRoomFree=min(miniRoomFree,roomFree);

//              if(!pq.empty()) pq.pop();

//             pq.push({endTime,miniRoomFree});
//             room[miniRoomFree]++;
//         }

//         int ans=-1,maxx=INT_MIN;
//         for(auto it:room) maxx=max(maxx,it);

//         for(int i=0;i<room.size();i++) if(room[i]==maxx) return i;

//         return 0;
        
//     }
// };
class Solution{
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue <pair<long long,long long> , vector<pair<long long,long long> >, greater<pair<long long,long long> >> pq;
        for(int i=0;i<n;i++) {
            pq.push({0, i});
        }
        sort(meetings.begin(), meetings.end());
        unordered_map<long long, long long> count;
        for(int i=0;i<meetings.size();i++) {
            long long startTime = meetings[i][0];
            long long endTime = meetings[i][1]-1;
            vector<pair<int,int> > temp;
            long long minIndex = 1e7;
            while(!pq.empty() && pq.top().first<startTime) {
                pair<long long,long long> v = pq.top();
                pq.pop();
                minIndex = min(minIndex, v.second);
                temp.push_back({0, v.second});
            }
            if(temp.size()>0) {
                count[minIndex]++;
                for(long long i=0;i<temp.size();i++) {
                    pair<long long,long long> u = temp[i];
                    if(u.second==minIndex) {
                        pq.push({endTime, u.second});
                    } else {
                        pq.push(u);
                    }
                    cout<<startTime+endTime-1<<" "<< u.second<<endl;
                }
            } else {
                pair<long long, long long> u = pq.top();
                pq.pop();
                int diff = endTime-startTime;
                u.first = (u.first == 0 ? 0 : (u.first+1)) + diff;
                count[u.second]++;
                pq.push(u);
            }
        }
        long long mn = -1;
        long long ans = -1;
        for(int i=0;i<n;i++) {
            if(count[i]>mn){
                ans = i;
                mn = count[i];
            }
        }
        return ans;
    }
};