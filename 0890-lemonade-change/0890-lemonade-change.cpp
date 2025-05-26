class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0 , ten=0, twenty=0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                five++;
            }else if(bills[i]==10){
                if(five!=0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(ten>=1 && five>=1){
                    ten--;
                    five--;
                    twenty++;
                }
                else if(five>=3){
                    five-=3;
                    twenty++;
                }else{
                    return false;
                }
            }
        }return true;
    }
};