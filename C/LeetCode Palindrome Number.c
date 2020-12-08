//leetcode Palindrome Number
bool isPalindrome(int x){
    if ( x < 0) return false;
    if ( x >= 0 && x < 10 ) return true;
    if ( (x % 10) == 0 ) return false;

    long res = 0 ;
    int tmp = x;
    while ( x != 0){
        res = 10 * res + ( x % 10);
        x = x / 10;
    }
    if (res == tmp ) return true;
    return false;

}