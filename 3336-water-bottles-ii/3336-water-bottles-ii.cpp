class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drank =0;
        int empties =0;

        while(numBottles>0){
            drank += numBottles;
            empties += numBottles;
            numBottles =0;

            if(empties >= numExchange){
                empties -= numExchange;
                numBottles++;
                numExchange++;
            } 
        }
        return drank;
    }
};