# leetcode

## Purpose

Practice how to publish a PR correctly and write some "testable" code. 
- [ ] Know that how to create a PR from a fork
- [ ] Know that how to write a testcase via googletest(for c/c++ language)
- [ ] Deploy CI/CD with jerkins
- [ ] Apply a bot to assist merge PR

## Prerequisite

* Install gtest
  Note that we should compile gtest by ourself. I do not know the reason ......  
  1. `sudo -s`
  2. `apt install libgtest-dev`
  3. `cd /usr/src/googletest/googletst && mkdir build && cd build`
  4. `cmake ../ && make`
  5. `cp libgtest*.a /usr/local/lib/`
  6. ctrl + D


## Useful resources

The following are tutorial resources.  
* [Do not issue pull requests from your master branch](https://blog.jasonmeridth.com/posts/do-not-issue-pull-requests-from-your-master-branch)
* [bors-ng/bors-ng](https://github.com/bors-ng/bors-ng)
* [googletest FAQ](https://github.com/doo/googletest/blob/master/wiki/FAQ.wiki)
