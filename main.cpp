#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol266;

/*
Input: "code"
Output: false
*/

tuple<string, bool> testFixture1()
{
  return make_tuple("code", false);
}

/*
Input: "aab"
Output: true
*/

tuple<string, bool> testFixture2()
{
  return make_tuple("aab", true);
}

/*
Input: "carerac"
Output: true
*/

tuple<string, bool> testFixture3()
{
  return make_tuple("carerac", true);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.can(get<0>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.can(get<0>(f))) << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.can(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}