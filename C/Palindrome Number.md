# Palindrome Number
**给定给定一个整数数组```nums``` 和一个目标值```target```，请你在该数组中找出和为目标值的那**两个** 整数，并返回他们的数组下标。  
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。  

eg:  
``` C
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
```
 answer
 ``` C
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
```
