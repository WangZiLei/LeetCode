class Solution {
public:
    bool judgeCircle(string moves) {
        int steps[] = {0,0};
        int length = moves.length();
        for(int i=0;i<length;i++){
            if(moves[i] == 'L'){
                steps[0]++;
            }else if(moves[i] == 'R'){
                steps[0]--;
            }else if(moves[i] == 'U'){
                steps[1]++;
            }else if(moves[i] == 'D'){
                steps[1]--;
            }
        }
        if(steps[0]==0 && steps[1]==0)
            return true;
        return false;
		/*
		if((steps[0]|steps[1]))
            return false;
        return true;
		*/
    }
};