sort(s.begin(), s.end(), [&](char a, char b) {
return counts[a] > counts[b] || (counts[a] == counts[b] && a < b);
});