class Solution {
public:
    int findComplement(int num) {
        bitset<32> bs(num);
        bs.flip();
        int pos = 0;
		
		//get the index of boundary element which is always zero
        for(int i=31;i>=0;i--)
            if(bs[i] == 0){
                pos = i;
                break;
            }
			
		//from boundary element to the highest bit element
		//set them with 0
        for(int i=pos;i<32;i++)
            bs[i] = 0;
        return bs.to_ulong();
    }
    
};