class Solution {
public:
    int isToeplitzMatrix(vector<vector<int>>& matrix) {
        int columns = matrix[0].size(),rows = matrix.size();
        if(columns==1 || rows==1)
            return true;
        
        for(int i=0;i<columns;i++){
            int element = matrix[0][i];
            int x=0,y=i;
            while(x<rows && y<columns){
				// if element != matrix[x][y]
                if(element^matrix[x][y])
                    return false;
                x++;
                y++;
            }
            
        }
        for(int i=0;i<rows;i++){
            int element = matrix[i][0];
            int x=i,y=0;
            while(x<rows && y<columns){
				// if element != matrix[x][y]
                if(element^matrix[x][y])
                    return false;
                x++;
                y++;
            }
            
        }
        
        return true;
    }
};