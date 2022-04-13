#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <queue>
using namespace sol266;
using namespace std;

/*takeaways
  - to be able to form a palindrome
    - the number of occurrnces of each
      char needs to be an even number.
    - or at most one of the char whose
      number of occurrences can be
      an odd number
*/

bool Solution::can(string &s)
{
  auto visited = unordered_set<char>();
  for (auto c : s)
    /* if it's in the set already, that means
       this incoming char will make the total
       number of occurrences of that char 2.
       We can recount it again from 0
    */
    if (!visited.insert(c).second)
      visited.erase(c);

  /* you can only allow at most one char whose
     number of occurrences is an odd number
  */
  return visited.size() <= 1;
}