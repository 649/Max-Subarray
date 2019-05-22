# Max Subarray

> Author: [@037](https://twitter.com/037)

### Compile
```
sudo g++ -std=c++11 -o MaxSubarray.exe MaxSubarray.cpp
```

### Input structure
The input starts with an integer numbern, which indicates the array size.Then, the integers, A[1], A[2], ... , A[n], follow, one per line.

### Output structure
Output the sum of integers in the max subarray, i.e., A[i*] + A[i* + 1] + ... + A[j*].

### Example

*Input*
```
6
-3
11
-2
-3
10
-5
```

*Output*
```
16
```