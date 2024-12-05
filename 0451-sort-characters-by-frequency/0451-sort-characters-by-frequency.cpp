class Solution {
public:
    string frequencySort(string s) {
        // Add all the char to the hashmap
        unordered_map<char,int>mpp;
        for(auto it : s){
            mpp[it]++;
        }

        //find the max frequency
        int maxfreq=0;
        for(auto& it:mpp){
            maxfreq=max(maxfreq,it.second);
        }

        //Create bucket and store the value
        vector<string>bucket(maxfreq+1);
        for(auto& it: mpp){
            bucket[it.second].append(it.second,it.first);
        }

        //Store it in a string
        string result;
        for(int i=maxfreq; i>0;--i){
            if(!bucket[i].empty()){
                result.append(bucket[i]);
            }
        }return result;

    }
};