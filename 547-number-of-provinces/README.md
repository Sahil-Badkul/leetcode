<h2><a href="https://leetcode.com/problems/number-of-provinces/">547. Number of Provinces</a></h2><h3>Medium</h3><hr><div><p>There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">n</code> cities. Some of them are connected, while some are not. If city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">a</code> is connected directly with city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">b</code>, and city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">b</code> is connected directly with city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">c</code>, then city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">a</code> is connected indirectly with city <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">c</code>.</p>

<p>A <strong>province</strong> is a group of directly or indirectly connected cities and no other cities outside of the group.</p>

<p>You are given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">n x n</code> matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected[i][j] = 1</code> if the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">i<sup>th</sup></code> city and the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">j<sup>th</sup></code> city are directly connected, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected[i][j] = 0</code> otherwise.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the total number of <strong>provinces</strong></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/graph1.jpg" style="width: 222px; height: 142px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> isConnected = [[1,1,0],[1,1,0],[0,0,1]]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/graph2.jpg" style="width: 222px; height: 142px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> isConnected = [[1,0,0],[0,1,0],[0,0,1]]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">1 &lt;= n &lt;= 200</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">n == isConnected.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">n == isConnected[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected[i][j]</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">1</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">0</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected[i][i] == 1</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(184, 199, 206) !important;">isConnected[i][j] == isConnected[j][i]</code></li>
</ul>
</div>