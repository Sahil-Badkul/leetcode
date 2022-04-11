<h2><a href="https://leetcode.com/problems/shift-2d-grid/">1260. Shift 2D Grid</a></h2><h3>Easy</h3><hr><div><p>Given a 2D <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid</code> of size <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m x n</code>&nbsp;and an integer <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">k</code>. You need to shift the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid</code>&nbsp;<code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">k</code> times.</p>

<p>In one shift operation:</p>

<ul>
	<li>Element at <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[i][j]</code> moves to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[i][j + 1]</code>.</li>
	<li>Element at <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[i][n - 1]</code> moves to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[i + 1][0]</code>.</li>
	<li>Element at <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[m&nbsp;- 1][n - 1]</code> moves to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">grid[0][0]</code>.</li>
</ul>

<p>Return the <em style="color: rgb(200, 218, 210) !important;">2D grid</em> after applying shift operation <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">k</code> times.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e1.png" style="width: 400px; height: 178px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> <code>grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 1
<strong>Output:</strong> [[9,1,2],[3,4,5],[6,7,8]]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e2.png" style="width: 400px; height: 166px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> <code>grid</code> = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
<strong>Output:</strong> [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> <code>grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 9
<strong>Output:</strong> [[1,2,3],[4,5,6],[7,8,9]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m ==&nbsp;grid.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n ==&nbsp;grid[i].length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= m &lt;= 50</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= n &lt;= 50</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">-1000 &lt;= grid[i][j] &lt;= 1000</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= k &lt;= 100</code></li>
</ul>
</div>