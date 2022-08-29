<h2><a href="https://leetcode.com/problems/number-of-islands/">200. Number of Islands</a></h2><h3>Medium</h3><hr><div><p>Given an <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">m x n</code> 2D binary grid <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">grid</code> which represents a map of <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">'1'</code>s (land) and <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">'0'</code>s (water), return <em style="color: rgb(255, 255, 255) !important;">the number of islands</em>.</p>

<p>An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">m == grid.length</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">n == grid[i].length</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">1 &lt;= m, n &lt;= 300</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">grid[i][j]</code> is <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">'0'</code> or <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">'1'</code>.</li>
</ul>
</div>