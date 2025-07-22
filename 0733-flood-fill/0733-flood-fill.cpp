class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];

        if(image[sr][sc]==color) return image;
        changeColor(image, sr, sc, color, originalColor);
        return image;
    }
    void changeColor(vector<vector<int>>& image, int sr, int sc, int color, int originalColor){
        if(sr<0 || sr>=image.size() || sc>=image[sr].size() || image[sr][sc] != originalColor) return;
        image[sr][sc] = color;

        changeColor(image, sr+1, sc, color, originalColor);
        changeColor(image, sr-1, sc, color, originalColor);
        changeColor(image, sr, sc+1, color, originalColor);
        changeColor(image, sr, sc-1, color, originalColor);
    }
};