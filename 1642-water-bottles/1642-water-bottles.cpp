class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank =0;

        while(numBottles >= numExchange){
        drank += numBottles - (numBottles % numExchange);
        numBottles = (numBottles % numExchange) + (numBottles / numExchange);
        }
        drank += numBottles;
        return drank;
    }
};