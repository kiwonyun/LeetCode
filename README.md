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

***

## Algorithms

* [Tree](https://github.com/kiwonyun/LeetCode#tree)
* [Math](https://github.com/kiwonyun/LeetCode#math)
* [Bit Manipulation](https://github.com/kiwonyun/LeetCode#bit-manipulation)
* [Queue](https://github.com/kiwonyun/LeetCode#queue)
* [Hash Table](https://github.com/kiwonyun/LeetCode#hash-table)
* [String](https://github.com/kiwonyun/LeetCode#string)
* [Linked List](https://github.com/kiwonyun/LeetCode#linked-list)

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
* [Dynamic Programming](https://github.com/kiwonyun/LeetCode#dynamic-programming)
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

### Bit Manipulation
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 405 | [Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/) | [C++](./C++/toHex.cpp) | _O(n)_       | _O(1)_          | Easy         | Bit Manipulation | Use & for array index (e.g. myArray[num & 0xf]) |

### Queue
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 406 | [Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | [C++](./C++/reconstructQueue.cpp) | _O(n)_       | _O(1)_          | Medium         | Queue | Good sorting makes a simple solution |

### Hash Table
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./C++/twoSum.cpp)| _O(n)_ | _O(1)_ | Easy | Hash | Hash is better than array indexing |
| 409 | [Longest Palindrome](https://leetcode.com/contest/7/problems/longest-palindrome/) | [C++](./C++/longestPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | Hash Table | |

### String
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(1)](./C++/convert_1.cpp)| _O(n)_ | _O(m)_ | Easy| String | Using string buffer per each row |
| 6 | [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [C++(2)](./C++/convert_2.cpp)| _O(n)_ | _O(1)_ | Easy| String, Math | Using modulo operator - array indexing |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./C++/isPalindrome.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome3.cpp)| _O(n)_ | _O(1)_ | Easy | String  | reverse string |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [C++](./C++/isPalindrome2.cpp)| _O(n)_ | _O(1)_ | Easy | String | reverse digits, <b>tricky</b> (e.g. /10, %10) - faster than using string |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [C++](./C++/romanToInt.cpp)| _O(n)_ | _O(1)_ | Easy | String | |

### Linked List
|  #  | Title           |  Solution       |  Time           | Space           | Difficulty    | Tag          | Note |
| -----|---------------- | --------------- | --------------- | --------------- | ------------- |--------------| ----- |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./C++/addTwoNumbers.cpp)| _O(n+m)_ | _O(1)_ | Medium| Linked List | |


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
#### vector, array
* simple vector initialization: 
	```java
	vector<int> array(4);    
    >> {0,0,0,0}
    ```
* simple array initialization
	```java
    int array[4] = {0};
    >> {0,0,0,0}
    ```
    
#### string
* convert string to lower case letters
	```java
    string str = "Apple";
    transform( str.begin(), str.end(), str.begin(), ::tolower );
    ```
    
* remove spaces from string
	```java
    str.erase( remove( s.begin(), s.end(), ' '), str.end() );
    ```

* remove special charaters and consider only alphanumeric charaters
	```java
   for(int i = 0; i < s.length(); i++){
        if( isalnum(s[i]) )
            str += s[i];
    }
	```

#### Hash
* initialization
	``` java
    unordered_map<char, int> T = { { 'I' , 1 }, { 'V' , 5 } };
	```