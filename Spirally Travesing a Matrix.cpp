class Solution{
    public:
    vector<int>spirallyTraverse(vector<vector<int>>mat){
        int row=mat.size();
        int col=mat[0].size();
        vector<int>result;

        int rowStart=0;
        int rowEnd=row-1;
        int colStart=0;
        int colEnd=col-1;

        while(rowStart<=rowEnd && colStart<=colEnd){
            for(int i=colStart;i<=colEnd;i++){
                result.push_back(mat[rowStart][i]);
            }
            rowStart++;

            for(int i=rowStart;i<=rowEnd;i++){
                result.push_back(mat[i][colEnd]);
            }
            colEnd--;

            if(rowStart<=rowEnd){
                for(int i=colEnd;i>=colStart;i--){
                    result.push_back(mat[rowEnd][i]);
                }
            }
            rowEnd--;

            if(colStart<=colEnd){
                for(int i=rowEnd;i>=rowStart;i--){
                    result.push_back(mat[i][colStart]);
                }
            }
            colStart++;
        }
        return result;
    }
};