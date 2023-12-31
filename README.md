# CMPSC 200: Core Samples

| Date              |          |
|:------------------|:---------|
| 14 November 2023 | Assigned  |
| 28 November 2023| Due, end of day      |
| Status           | [![GatorGrader](../../actions/workflows/main.yml/badge.svg)](../../actions/workflows/main.yml) |


## Learning objectives

* summarize the process and evaluation techniques of multi-core programming
* implement multi-core program using a shared memory buffer
* calculate and analyze metrics which describe multi-core program performance
* select and apply best-fit multi-core program approaches
* identify best-candidate programs for revision into multi-core implementations

## Introduction

### `hello_core`

This program is located in [hello_core/main.c](hello_core/main.c).

We've looked at this program...so many times. The best part: it still keeps getting more interesting. Here, we'll
explore how cores communicate.

### `core_conditions`

Soon, you'll be sent off to boldly go where no one has gone before -- to mine space rocks. Before you go, it'd be
helpful to learn a little bit about the diagnostic equipment you have on board your mining craft. Specifically,
we're interested in the internal temperature sensor. Previously, it worked, but it was a bit slow. Advances in 
technology allow us to speed processing up a bit.

#### `single`

This program is located in [core_conditions/single_core_conditions/main.c](core_conditions/single_core_conditions/main.c).

Let's look at the way things _currently_ are, first. This program reads from our on-board temperature sensor using a single core
in a "thread-blocking" way: we have to execute all instructions synchronously -- each has to finish before we can move on to the
next one. This program will provide a baseline against which to observe our more advanced versions.

#### `multi`

##### `buffer`

Complete this work in [core_conditions/multi_core_conditions/core_conditions_buffer/main.c](core_conditions/multi_core_conditions/core_conditions_buffer/main.c).

The first way we can speed up our temperature sensor is to drop information into the shared _buffer_ through which our cores communicate.
While this still involves _blocking_ procedures, we'll witness how much faster this setup makes our program.

##### `functions`

Complete this program using [core_conditions/multi_core_conditions/core_conditions_functions/main.c](core_conditions/multi_core_conditions/core_conditions_functions/main.c).

This program presents a quasi-alternative to our buffer strategy: instead of dumping values for cores to "pick up," what if we passed _entire functions_ to the
buffer and exchanged their results through buffer transfer? We'll discover a key lesson about the way that our buffer works and develop a new strategy
for tacking our speed-up problem.

### Lab: `core_principles`

Complete this work in the folders contained in the [core_principles](core_principles) directory.

Your task is to revise a previous lab program from the list below into _two_ multicore versions:

* a one-way buffer read/write version (passes only values)
* a version which passes functions instead of purely values

This will require you to generalize about the code written in both of our multicore examples and apply a few techniques that test the edge of our knowledge. In addition, you'll need to provide the single-core versions of the programs in order to do testing (i.e. speedup and efficiency testing).

The labs from you you can choose are:

* `cart_corral` from `mine-cart-madness`
* `classifier` from `the-moon-rocks`
* `adder` from `c-of-tranquility`
* `majority` from `circuit-scramble`

All but one of these are good candidates for "parallelization" (i.e. multicore programming). If you find the one that's _not_ a great fit, do not despair! You can still finish the lab by answering the quesitons in the report.

### Assignment "Hacks"

See the suggestion below to challenge yourself to implement a Hack. As always, you are allowed to develop
your own Hack to satisfy this stretch goal. Place the code for the Hack inline with the code in the corresponding
file.

In order to recieve credit for the Hack, you must fill out the [hack.md](docs/hack.md) file located in the
`docs` folder.

#### `core_conditions_functions`

This program suffered _greatly_ from our approach. However, is there still a way to make it _faster_ than the single-core version? 

> Hint: Can you find a way to reduce the memory footprint?

#### Make it your own

You are free to develop your own "Hack" for this assignment, provided that you respond to all of the questions in hack documentation.

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more information.
