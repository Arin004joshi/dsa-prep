class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        if (s1.length() != s2.length()) return false;
        if (s1.length() < 2) return s1 == s2;
        
        // Left rotation by 2
        string leftRot = s1.substr(2) + s1.substr(0, 2);
        
        // Right rotation by 2
        string rightRot = s1.substr(s1.size() - 2) + s1.substr(0, s1.size() - 2);
        
        return (s2 == leftRot || s2 == rightRot);
    }
};
