# LeetCode
This project is for C++ Solutions of [LeetCode](https://leetcode.com/) Questions. I have started to solve the problems of LeetCode since 2015 Summer. After one year experience, I created this repository to organize and summarize my solutions for the better learning. I will keep update for more and better solutions.

## All Problems

|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Idea Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- | 
| 400 | [Nth Digit](https://leetcode.com/problems/nth-digit/) | [C++](./C++/findNthDigit.cpp) | _O(n)_       | _O(1)_          | Easy         | Math |  |
| 402 | [Remove K digits](https://leetcode.com/problems/remove-k-digits/) | [C++](./C++/removeKdigits.cpp) | _O(n)_       | _O(1)_          | Medium         |  | check non-increasing number |
| 404 | [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/) | [C++](./C++/sumOfLeftLeaves.cpp) | _O(n)_       | _O(1)_          | Easy         | Tree |  |
| 405 | [Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/) | [C++](./C++/toHex.cpp) | _O(n)_       | _O(1)_          | Easy         | Bit Manipulation | Use & for array index (e.g. myArray[num & 0xf]) |
| 406 | [Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | [C++](./C++/reconstructQueue.cpp) | _O(n)_       | _O(1)_          | Medium         | Queue | Good sorting makes a simple solution |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./C++/twoSum.cpp)| _O(n)_ | _O(1)_ | Easy | Hash | Hash is better than array indexing |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(1)](./C++/convert_1.cpp)| _O(n)_ | _O(m)_ | Easy| String | Using string buffer per each row |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(2)](./C++/convert_2.cpp)| _O(n)_ | _O(1)_ | Easy| String, Math | Using modulo operator - array indexing |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./C++/addTwoNumbers.cpp)| _O(n+m)_ | _O(1)_ | Medium| Linked List | |
| 409 | [Longest Palindrome](https://leetcode.com/contest/7/problems/longest-palindrome/) | [C++](./C++/longestPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | Hash Table | |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./C++/isPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome3.cpp)| _O(n)_ | _O(1)_ | Easy | String  | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome2.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse digits, <b>tricky</b> (e.g. /10, %10) - faster than using string |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [C++](./C++/romanToInt.cpp)| _O(n)_ | _O(1)_ | Easy | String | |
| 415 | [Add Strings](https://leetcode.com/contest/leetcode-weekly-contest-8/problems/add-strings/) | [C++](./C++/addStrings.cpp)| _O(n)_ | _O(1)_ | Easy | String | |
| 416 | [Partition Equal Subset Sum](https://leetcode.com/contest/leetcode-weekly-contest-8/problems/partition-equal-subset-sum/) | [C++](./C++/canPartition.cpp)| _O(nm)_ | _O(m)_ | Medium | DP | variant of <b>subset-sum</b> problem, note that the sum of each subset is equal to the half of the sum|
| 439 | [Ternary Expression Parser](https://leetcode.com/contest/smarking-algorithm-contest/problems/ternary-expression-parser/) | [C++](./C++/parseTernary.cpp)| _O(n^2)_ | _O(1)_ | Medium | String | |
| 438 | [Find All Anagrams in a String](https://leetcode.com/contest/smarking-algorithm-contest/problems/find-all-anagrams-in-a-string/) | [C++](./C++/findAnagrams.cpp)| _O(n)_ | _O(1)_ | Medium | Hash | Tricky: using counting # of matched characters |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./C++/singleNumber.cpp)| _O(n)_ | _O(1)_ | Easy | Bit manipulation | |
| 371 | [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | [C++](./C++/getSum.cpp)| _O(n)_ | _O(1)_ | Easy | Bit manipulation | <b>very simple 7 line code!</b> (Also, consider getSubtract(), getProduct(), negate(), etc.|
| 292 | [Nim Game](https://leetcode.com/problems/nim-game/) | [C++](./C++/canWinNim.cpp)| _O(n)_ | _O(1)_ | Easy | Math | |
| 435 | [Non-overlapping Intervals](https://leetcode.com/contest/smarking-algorithm-contest-2/problems/non-overlapping-intervals/) | [C++](./C++/eraseOverlapIntervals.cpp)| _O(n)_ | _O(1)_ | Medium | Interval, Sort | Tricky: sort by ending edge first|
| 436 | [Find Right Interval](https://leetcode.com/contest/smarking-algorithm-contest-2/problems/find-right-interval/) | [C++](./C++/findRightInterval.cpp)| _O(n)_ | _O(1)_ | Medium | Interval, Hash | idea: original hash map is always sorted. Also, use lower_bound() |
| 38 | [Count and Say](https://leetcode.com/problems/count-and-say/) | [C++](./C++/countAndSay.cpp.cpp)| _O(n)_ | _O(1)_ | Easy | String
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./C++/lengthOfLongestSubstring.cpp)| _O(n)_ | _O(1)_ | Medium | DP | two pointers
| 299 | [Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/) | [C++](./C++/getHint.cpp)| _O(n)_ | _O(1)_ | Easy | Hash Table | one pass (increase/decrease hash value) |

***

## Algorithms

* [Tree](https://github.com/kiwonyun/LeetCode#tree)
* [Math](https://github.com/kiwonyun/LeetCode#math)
* [Bit Manipulation](https://github.com/kiwonyun/LeetCode#bit-manipulation)
* [Queue](https://github.com/kiwonyun/LeetCode#queue)
* [Hash Table](https://github.com/kiwonyun/LeetCode#hash-table)
* [String](https://github.com/kiwonyun/LeetCode#string)
* [Linked List](https://github.com/kiwonyun/LeetCode#linked-list)
* [Dynamic Programming](https://github.com/kiwonyun/LeetCode#dynamic-programming)
* [Interval](https://github.com/kiwonyun/LeetCode#interval)

<!--
* [Array](https://github.com/kiwonyun/LeetCode#array)
* [Stack](https://github.com/kiwonyun/LeetCode#stack)
* [Queue](https://github.com/kiwonyun/LeetCode#queue)
* [Heap](https://github.com/kiwonyun/LeetCode#heap)
* [Data Structure](https://github.com/kiwonyun/LeetCode#data-structure)
* [Two Pointers](https://github.com/kiwonyun/LeetCode#two-pointers)
* [Sort](https://github.com/kiwonyun/LeetCode#sort)
* [Recursion](https://github.com/kiwonyun/LeetCode#recursion)
* [Binary Search](https://github.com/kiwonyun/LeetCode#binary-search)
* [Binary Search Tree](https://github.com/kiwonyun/LeetCode#binary-search-tree)
* [Breadth-First Search](https://github.com/kiwonyun/LeetCode#breadth-first-search)
* [Depth-First Search](https://github.com/kiwonyun/LeetCode#depth-first-search)
* [Backtracking](https://github.com/kiwonyun/LeetCode#backtracking)
* [Greedy](https://github.com/kiwonyun/LeetCode#greedy)
* [Design](https://github.com/kiwonyun/LeetCode#design)
-->

### Tree
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- 
| 404 | [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/) | [C++](./C++/sumOfLeftLeaves.cpp) | _O(n)_       | _O(1)_          | Easy         | Tree | 

### Math
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 400 | [Nth Digit](https://leetcode.com/problems/nth-digit/) | [C++](./C++/findNthDigit.cpp) | _O(n)_       | _O(1)_          | Easy         | simple math | |
| 292 | [Nim Game](https://leetcode.com/problems/nim-game/) | [C++](./C++/canWinNim.cpp)| _O(n)_ | _O(1)_ | Easy | Math | |

### Bit Manipulation
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 405 | [Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/) | [C++](./C++/toHex.cpp) | _O(n)_       | _O(1)_          | Easy         | Bit Manipulation | Use & for array index (e.g. myArray[num & 0xf]) |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./C++/singleNumber.cpp)| _O(n)_ | _O(1)_ | Easy | Bit manipulation | |
| 371 | [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | [C++](./C++/getSum.cpp)| _O(n)_ | _O(1)_ | Easy | Bit manipulation | <b>very simple 7 line code!</b> (Also, consider getSubtract(), getProduct(), negate(), etc.|

### Queue
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 406 | [Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | [C++](./C++/reconstructQueue.cpp) | _O(n)_       | _O(1)_          | Medium         | Queue | Good sorting makes a simple solution |

### Hash Table
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./C++/twoSum.cpp)| _O(n)_ | _O(1)_ | Easy | Hash | Hash is better than array indexing |
| 409 | [Longest Palindrome](https://leetcode.com/contest/7/problems/longest-palindrome/) | [C++](./C++/longestPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | Hash Table | |
| 438 | [Find All Anagrams in a String](https://leetcode.com/contest/smarking-algorithm-contest/problems/find-all-anagrams-in-a-string/) | [C++](./C++/findAnagrams.cpp)| _O(n)_ | _O(1)_ | Medium | Hash | Tricky: using counting # of matched characters |
| 299 | [Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/) | [C++](./C++/getHint.cpp)| _O(n)_ | _O(1)_ | Easy | Hash Table | one pass (increase/decrease hash value) |

### String
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(1)](./C++/convert_1.cpp)| _O(n)_ | _O(m)_ | Easy| String | Using string buffer per each row |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(2)](./C++/convert_2.cpp)| _O(n)_ | _O(1)_ | Easy| String, Math | Using modulo operator - array indexing |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./C++/isPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome3.cpp)| _O(n)_ | _O(1)_ | Easy | String  | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome2.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse digits, <b>tricky</b> (e.g. /10, %10) - faster than using string |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [C++](./C++/romanToInt.cpp)| _O(n)_ | _O(1)_ | Easy | String | |
| 415 | [Add Strings](https://leetcode.com/contest/leetcode-weekly-contest-8/problems/add-strings/) | [C++](./C++/addStrings.cpp)| _O(n)_ | _O(1)_ | Easy | String | |
| 439 | [Ternary Expression Parser](https://leetcode.com/contest/smarking-algorithm-contest/problems/ternary-expression-parser/) | [C++](./C++/parseTernary.cpp)| _O(n^2)_ | _O(1)_ | Medium | String | |
| 38 | [Count and Say](https://leetcode.com/problems/count-and-say/) | [C++](./C++/countAndSay.cpp.cpp)| _O(n)_ | _O(1)_ | Easy | String


### Linked List
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./C++/addTwoNumbers.cpp)| _O(n+m)_ | _O(1)_ | Medium| Linked List | |

### Dynamic Programming
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 416 | [Partition Equal Subset Sum](https://leetcode.com/contest/leetcode-weekly-contest-8/problems/partition-equal-subset-sum/) | [C++](./C++/canPartition.cpp)| _O(nm)_ | _O(m)_ | Medium | DP | variant of <b>subset-sum</b> problem, note that the sum of each subset is equal to the half of the sum|
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./C++/lengthOfLongestSubstring.cpp)| _O(n)_ | _O(1)_ | Medium | DP | two pointers

### Interval
* Input looks like [[2,3],[4,5]]. They are mostly sortring problem, but tricky!

|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 435 | [Non-overlapping Intervals](https://leetcode.com/contest/smarking-algorithm-contest-2/problems/non-overlapping-intervals/) | [C++](./C++/eraseOverlapIntervals.cpp)| _O(n)_ | _O(1)_ | Medium | Interval, Sort | Tricky: sort by ending edge first|
| 436 | [Find Right Interval](https://leetcode.com/contest/smarking-algorithm-contest-2/problems/find-right-interval/) | [C++](./C++/findRightInterval.cpp)| _O(n)_ | _O(1)_ | Medium | Interval, Hash | idea: original hash map is always sorted. Also, use lower_bound() |


***

## Notes and Tips

### Tip
* palindrome:
	* 1) reverse string
	* 2) hash
	* 3) indexing (move left2right == move right2left)

### Math
* -a mod b = b - (a mod b)

### C++
#### C++11
* for loop

	```cpp
    for(int i : nums)
            sum += i;
    ```


#### vector, array
* simple vector initialization: 

	```cpp
	vector<int> array(4);    
    >> {0,0,0,0}

	vector<vector<int>> array(3, vector<int>(4))
    >> {0,0,0,0,
    >>  0,0,0,0,
    >>  0,0,0,0}
    
    vector<vector<int>> array(3);
    >> {vector<int>, vector<int>, vector<int>}
    
    vector<bool> array(4, true); 	// default of boolean vector is false
    
    vector<pair<bool, int>> array(3, make_pair(false, 0));
    
    ```
* simple array initialization

	```cpp
    int array[4] = {0};
    >> {0,0,0,0}
    ```
    
* sort by user-defined function (the simpliest version)

	```cpp
	sort(vec.begin(), vec.end(), [](const myStruct& a, const myStruct& b){ return a.val < b.val; });
	```

* return the index of the maximum value
	```cpp
    max_element(v.begin(), v.end()) - v.begin();
    or
    distance(v, max_element(v.begin(), v.end())));
    ```
 
#### string
* convert string to lower case letters

	```cpp
    string str = "Apple";
    transform( str.begin(), str.end(), str.begin(), ::tolower );
    ```
    
* remove spaces from string

	```cpp
    str.erase( remove( s.begin(), s.end(), ' '), str.end() );
    ```

* remove special charaters and consider only alphanumeric charaters

	```cpp
   for(int i = 0; i < s.length(); i++){
        if( isalnum(s[i]) )
            str += s[i];
    }
	```

* substring

	``` cpp
    str.substr(pos, len) // from pos with len length
    str.substr(pos) // from pos to the end
    ```

* convert char to string
	``` cpp
    char c = 'a';
    string str = string(1, c);
    ```
    
#### hash
* initialization

	``` cpp
    unordered_map<char, int> T = { { 'I' , 1 }, { 'V' , 5 } };
	```
    
#### sorting
* lower_bound, upper_bound
	```cpp
    map<int,int> hash;
    hash[1] = 3;
    hash[5] = 2;
    hash[10] = 0;
    hash[20] = 1;

    auto it = hash.lower_bound( 10 );
    // it->second => 0;
    ```
    
    ```cpp
    int main () {
      int myints[] = {10,20,30,30,20,10,10,20};
      std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

      std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

      std::vector<int>::iterator low,up;
      low=std::lower_bound (v.begin(), v.end(), 20); //          ^
      up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

      std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
      std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

      return 0;
    }
    
    // lower_bound at position 3
	// upper_bound at position 6

    ```