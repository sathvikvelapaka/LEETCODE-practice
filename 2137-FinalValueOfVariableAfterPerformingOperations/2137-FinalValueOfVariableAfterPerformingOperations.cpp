// Last updated: 24/10/2025, 02:31:06
class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int inc=0,dec=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="++X")
            inc++;
            if(arr[i]=="X++")
            inc++;
            if(arr[i]=="X--")
            dec++;
            if(arr[i]=="--X")
            dec++;
        }
        return inc-dec;
        
    }
};