# Why Writing 100 Line of Code can be Better than just 2 lines of code 

When users evaluate the performance of a functionality, they usually focus on whether the output meets the expected results. From their perspective, only the result matters.

However, from a programmer's point of view, it's not just about what the code achieves, but also how it does it. Developers often strive to implement logic using the minimum number of statements or clever techniques to reduce code size and complexity.

Sometimes this works. But sometimes, it doesn’t. Fewer lines of code do not always mean better performance. In fact, concise code can sometimes take more time to execute, especially as the number of inputs grows.

Let’s explore this idea through a classic example.

Some time its work but some time its does not work. Even less number of statements consume excess time to excute regardless of numebr of inputs. 

So here we can understand this thigns with one example 

**Problem Statement :- 
A bag of 9 balls with 8 equals weight ball and 1 has different weight.  
Write code to find the ball with a different weight.**

-> So here we implemented the solution in two different approaches.   
 - One using a simple for loop
 - Another using a grouping strategy with weight comparison    

Let's analyze both

<mark>**1. Using simple for loop**</mark> 
```
int bag[9] = {1, 1, 1, 2, 1, 1, 1, 1, 1};
int diff_ball = bag[0];

for (int i = 1; i < 9; i++) {
    if (bag[i] != diff_ball) {
        diff_ball = bag[i];
        return diff_ball;
    }
}

```

<mark>**2. By using weight and group logic**</mark>

9 balls we devided in 3 groups and calculate total weight of group. If any group weight has different then compare their individual balls instead of remaining balls of other groups. 

```
 int bag[9] = {1, 1, 1, 2, 1, 1, 1, 1, 1};

int A = bag[0] + bag[1] + bag[2];
int B = bag[3] + bag[4] + bag[5];
int C = bag[6] + bag[7] + bag[8];

if (A == B) {
    // Different ball is in group C
    int diff_ball = (bag[6] != bag[7]) ? ((bag[6] != bag[8]) ? bag[6] : bag[8]) : bag[7];
}
else if (A > B) {
    // Different ball is in group A
    int diff_ball = (bag[0] != bag[1]) ? ((bag[0] != bag[2]) ? bag[0] : bag[2]) : bag[1];
}
else {
    // Different ball is in group B
    int diff_ball = (bag[3] != bag[4]) ? ((bag[3] != bag[5]) ? bag[3] : bag[5]) : bag[4];
}

```

At first glance, this approach seems longer and more complex. But during debugging, you’ll find that in the worst-case scenario, it performs only 4 comparisons, which is more efficient than checking all 9 balls one by one. 

**Conclusion:-**   
Don’t judge the efficiency of an algorithm by the number of lines.  
A longer solution might be faster, more optimized, or more robust, depending on the logic used.