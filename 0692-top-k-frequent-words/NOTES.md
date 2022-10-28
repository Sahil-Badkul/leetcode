private:
struct MyComp {
bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
if(a.first != b.first) {
return a.first > b.first;
}
else {
return a.second < b.second;
}
}
};