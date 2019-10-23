# leetcode [![Build Status](https://www.travis-ci.org/T-R-I-P/leetcode.svg?branch=master)](https://www.travis-ci.org/T-R-I-P/leetcode)

## Purpose

Practice how to publish a PR correctly and write some "testable" code. 
- [ ] Know that how to create a PR from a fork
- [ ] Know that how to write a testcase via googletest(for c/c++ language)
- [ ] Deploy CI/CD with jerkins
- [ ] Apply a bot to assist merge PR

## Prerequisite

* Install gtest
  Note that we should compile gtest by ourself. I do not know the reason ...... If you want to install gtest on your own PC, just type the following commands
  1. `sudo -s`
  2. `apt install libgtest-dev`
  3. `cd /usr/src/googletest/googletst && mkdir build && cd build`
  4. `cmake ../ && make`
  5. `cp libgtest*.a /usr/local/lib/`
  6. ctrl + D
  
  If you want to use CI/CD with travis CI, we should set gtest as submodule.   
  (TBC)


## Useful resources

The following are tutorial resources.  
* [Do not issue pull requests from your master branch](https://blog.jasonmeridth.com/posts/do-not-issue-pull-requests-from-your-master-branch)
* [bors-ng/bors-ng](https://github.com/bors-ng/bors-ng)
* [googletest FAQ](https://github.com/doo/googletest/blob/master/wiki/FAQ.wiki)
* [C++ CI: Travis, CMake, GTest, Coveralls & Appveyor](http://david-grs.github.io/cpp-clang-travis-cmake-gtest-coveralls-appveyor/)
* [ttroy50/cmake-exampleis](https://github.com/ttroy50/cmake-examples)
* [利用Travis CI+GitHub实现持续集成和自动部署](https://zhuanlan.zhihu.com/p/85175312)
