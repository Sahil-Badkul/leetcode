<h2><a href="https://leetcode.com/problems/as-far-from-land-as-possible/">1162. As Far from Land as Possible</a></h2><h3>Medium</h3><hr><div><p>Given an <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">n x n</code> <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">grid</code>&nbsp;containing only values <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">0</code> and <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">1</code>, where&nbsp;<code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">0</code> represents water&nbsp;and <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">1</code> represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance.&nbsp;If no land or water exists in the grid, return <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">-1</code>.</p>

<p>The distance used in this problem is the Manhattan distance:&nbsp;the distance between two cells <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">(x0, y0)</code> and <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">(x1, y1)</code> is <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">|x0 - x1| + |y0 - y1|</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex1.JPG" style="width: 185px; height: 87px; filter: brightness(0.75); color: rgb(165, 192, 180) !important;">
<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> grid = [[1,0,1],[0,0,0],[1,0,1]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The cell (1, 1) is as far as possible from all the land with distance 2.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/03/1336_ex2.JPG" style="width: 184px; height: 87px; filter: brightness(0.75); color: rgb(165, 192, 180) !important;">
<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> grid = [[1,0,0],[0,0,0],[0,0,0]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The cell (2, 2) is as far as possible from all the land with distance 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">n == grid.length</code></li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">n == grid[i].length</code></li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">1 &lt;= n&nbsp;&lt;= 100</code></li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">grid[i][j]</code>&nbsp;is <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">0</code> or <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">1</code></li>
</ul>
</div>