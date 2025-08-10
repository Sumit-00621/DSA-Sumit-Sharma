#include <bits\stdc++.h>
using namespace std;

// Pairs
void explainPair()
{
    pair<int, int> q = {1, 3};
    cout << q.first << " " << q.second << endl;

    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

// Vectors
void explainVector()
{
    vector<int> v; // Creates empty container {}

    v.push_back(1);    // To add element from the end -> {1}
    v.emplace_back(2); // dynamically increase size and add element -> {1,2}

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vect(5, 100);

    vector<int> vecto(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1); // copying the v1 container

    vector<int> n = {20, 10, 15, 6, 7};
    vector<int>::iterator it = n.begin();

    it++;
    cout << *(it) << " "; // 10

    it = it + 2;
    cout << *(it) << " "; // 6

    vector<int>::iterator a = n.end();
    vector<int>::reverse_iterator b = n.rend();   // reverse end
    vector<int>::reverse_iterator c = n.rbegin(); // reverse begin

    cout << n[0] << " ";      // 20
    cout << n.back() << endl; // 7

    for (vector<int>::iterator d = n.begin(); d != n.end(); d++)
    {
        cout << *(d) << " "; // 20 10 15 6 7
    }
    cout << endl;

    for (auto e = n.begin(); e != n.end(); e++)
    {
        cout << *(e) << " "; // 20 10 15 6 7
    }
    cout << endl;

    for (auto f : n)
    {
        cout << f << " "; // 20 10 15 6 7
    }
    cout << endl;

    n.erase(n.begin() + 1); // erase 10 -> 20 15 6 7

    n.erase(n.begin() + 1, n.begin() + 3); // erase 15 6 -> 20 7

    vector<int> l(2, 100);
    l.insert(l.begin(), 300);       // 300 100 100
    l.insert(l.begin() + 1, 2, 10); // 300 10 10 100 100

    vector<int> copy(2, 50);
    l.insert(l.begin(), copy.begin(), copy.end()); // 50 50 300 10 10 100 100

    cout << l.size(); // 7

    l.pop_back(); // delete last element -> 50 50 300 10 10 100

    vector<int> a1 = {10, 20};
    vector<int> a2 = {20, 40};
    a1.swap(a2); // a1 = 20 40 and a2 = 10 20

    l.clear(); // erase the entire vector

    cout << a1.empty(); // To check vector is empty or not
}

// List
void explainList()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(); //{2,4}

    // rest functions are same as vector
}

// Deque
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back();  //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();

    // rest are same as vector
}

// Stack
void explainStack()
{
    stack<int> st;
    st.push(1);    // 1
    st.push(2);    // 2 1
    st.push(3);    // 3 2 1
    st.push(3);    // 3 3 2 1
    st.emplace(5); // 5 3 3 2 1

    cout << st.top() << endl; // 5
    st.pop();                 // 3 3 2 1

    cout << st.top() << endl;  // 3
    cout << st.size() << endl; // 4
    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue
void explainQueue()
{
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1 2
    q.emplace(4); // 1 2 4

    q.back() += 5; // 1 2 9

    cout << q.back(); // 9

    cout << q.front(); // 1

    q.pop();           // 2 9
    cout << q.front(); // 2

    // size swap and empty same as stack
}

// Priority Queue
void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);     // 5
    pq.push(2);     // 5 2
    pq.push(8);     // 8 5 2
    pq.emplace(10); // 10 8 5 2

    cout << pq.top() << endl; // 10

    pq.pop(); // 8 5 2

    cout << pq.top() << endl; // 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);     // 5
    p.push(2);     // 2 5
    p.push(8);     // 2 5 8
    p.emplace(10); // 2 5 8 10

    cout << p.top() << endl; // 2
}

// Set
void explainSet()
{
    // stores in sorted order
    // stores only unique elements
    set<int> s;
    s.insert(1);  // 1
    s.insert(2);  // 1 2
    s.insert(2);  // 1 2
    s.insert(4);  // 1 2 4
    s.emplace(3); // 1 2 3 4

    auto it = s.find(3);

    auto a = s.find(5);

    s.erase(3); // erase 5

    int cnt = s.count(1);

    auto b = s.find(1);
    s.erase(it);

    auto it1 = s.find(2);
    auto it2 = s.find(3);
    s.erase(it1, it2);

    auto c = s.lower_bound(2);
    auto d = s.upper_bound(3);
}

// MultiSet
void explainMultiSet()
{
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // 1
    ms.insert(1); // 1 1
    ms.insert(1); // 1 1 1

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single 1 is erased

    ms.erase(ms.find(1), ms.find(1) + 2);
    // rest all the functions same as set
}

// Unordered Set
void explainUSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    //  as above, it does not stores in any particular order it has a better complexity than set in most cases, except some where collision happens
}

// Map
void explainMap()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mp;

    map<pair<int, int>, int> m;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    m[{2, 3}] = 18;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    auto it = mpp.find(3);
    cout << *(it) << endl;
}

// Multimap
void explainMultimap()
{
    // Everything same as map, only it can store multiple keys
    // only mpp[key] cannot used here
}

// UnorderedMap
void explainUnorderedMap()
{
    // same as set and unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.second == p2.second)
        if (p1.first > p2.first)
            return true;
    return false;
}
void explainExtra()
{
    vector<int> v;
    int a;
    int n;
    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);
    sort(a, a + n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a + n, comp);

    int num = 7;
    int cnt = __builtin_popcount();

    long long n = 1595354255;
    int ct = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = max_element(a, a + n);
}

int main()
{
    explainMap();
    return 0;
}