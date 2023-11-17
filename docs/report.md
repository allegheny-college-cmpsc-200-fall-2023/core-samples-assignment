# Core Samples: General report

This week we explore how to "parallelize" applications to observe gains and penalties in efficiency. Namely:

* placing code on a second core to divide tasks to simulate asynchronous processing
* passing information between cores via a first-in-first-out (FIFO) buffer
* communicating function calls through the FIFO buffer to run functions via complex pointers

## Our functions-based multi-core example actually _decreased_ performance of our code. Speculate: how do you think this is possible?

`TODO`

## This assignment asks you to revise a former program into multi-core implementation. What challenges did you face and how did you solve them?

`TODO`

## After revising the program, compare it to the original single-core implementation timing.

> Use the table below to record your results

| Program type | Speedup | Efficiency |
|:-------------|:--------|:-----------|
|Single-core   |`TODO`   |`TODO`      |
|Multi-core buffer-only|`TODO` |`TODO` |
|Multi-core functions-over-buffer|`TODO` |`TODO` |

### Which implemention is the most efficient? Why?

`TODO`

### (Optional) Did you choose an unparallize-able problem? Why was it unparallelizeable?

> Delete this `TODO` if this question doesn't apply.