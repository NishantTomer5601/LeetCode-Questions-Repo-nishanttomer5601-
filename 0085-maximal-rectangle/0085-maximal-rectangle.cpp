class Solution {
public:

    vector<int> NextSmallerElement(vector<int> &mat){

        int n=mat.size();
        stack<int> s;
        vector<int> next(n);
        next[n-1]=-1;
        s.push(-1);
        s.push(n-1);

        for(int i=n-2;i>=0;i--){
            int curr=mat[i];
            if(s.top()>=0 && mat[s.top()]<curr){
                next[i]=s.top();                
            }
            else{
                while(s.top()>=0 && mat[s.top()]>=curr){
                    s.pop();
                }
                next[i]=s.top();
            }
            s.push(i);
        }
  return next;
    }

    vector<int> PrevSmallerElement(vector<int> &mat){

        int n=mat.size();
        stack<int> s;
        vector<int> next(n);
        next[0]=-1;
        s.push(-1);
        s.push(0);

        for(int i=1;i<n;i++){
            int curr=mat[i];
            if(s.top()>=0 && mat[s.top()]<curr){
                next[i]=s.top();                
            }
            else{
                while(s.top()>=0 && mat[s.top()]>=curr){
                    s.pop();
                }
                next[i]=s.top();
            }
            s.push(i);
        }

  return next;
    }




    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> matrixx(n,vector<int>(m));

        for(int i=0;i<m;i++) matrixx[0][i]=matrix[0][i]-'0';

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){

                if(matrix[i][j]=='0') {
                    matrixx[i][j]=0;
                }
                else{
                    matrixx[i][j]=(matrix[i][j]-'0')+(matrixx[i-1][j]);
                }

            }
        }
        


int area=INT_MIN;

        for(int i=0;i<n;i++){
            vector<int> h=matrixx[i];
          

            vector<int> next=NextSmallerElement(h);
            vector<int> prev=PrevSmallerElement(h);
            for(int j=0;j<m;j++){

                int l=matrixx[i][j];
                if(next[j]==-1) next[j]=m;
                int b=next[j]-prev[j]-1;

                int newarea=l*b;
                area=max(area,newarea);

            }
        }
        return area;       
    }
};