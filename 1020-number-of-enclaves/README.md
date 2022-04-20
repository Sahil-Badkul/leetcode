<h2><a href="https://leetcode.com/problems/number-of-enclaves/">1020. Number of Enclaves</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m x n</code> binary matrix <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid</code>, where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code> represents a sea cell and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1</code> represents a land cell.</p>

<p>A <strong>move</strong> consists of walking from one land cell to another adjacent (<strong>4-directionally</strong>) land cell or walking off the boundary of the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid</code>.</p>

<p>Return <em style="color: rgb(200, 218, 210) !important;">the number of land cells in</em> <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid</code> <em style="color: rgb(200, 218, 210) !important;">for which we cannot walk off the boundary of the grid in any number of <strong>moves</strong></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/enclaves1.jpg" style="width: 333px; height: 333px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three 1s that are enclosed by 0s, and one 1 that is not enclosed because its on the boundary.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/enclaves2.jpg" style="width: 333px; height: 333px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> All 1s are either on the boundary or can reach the boundary.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m == grid.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n == grid[i].length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= m, n &lt;= 500</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[i][j]</code> is either <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code> or <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1</code>.</li>
</ul>
</div>