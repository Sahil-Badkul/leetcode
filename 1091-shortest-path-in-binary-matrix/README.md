<h2><a href="https://leetcode.com/problems/shortest-path-in-binary-matrix/">1091. Shortest Path in Binary Matrix</a></h2><h3>Medium</h3><hr><div><p>Given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n x n</code> binary matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>, return <em style="color: rgb(234, 238, 241) !important;">the length of the shortest <strong>clear path</strong> in the matrix</em>. If there is no clear path, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>.</p>

<p>A <strong>clear path</strong> in a binary matrix is a path from the <strong>top-left</strong> cell (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(0, 0)</code>) to the <strong>bottom-right</strong> cell (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(n - 1, n - 1)</code>) such that:</p>

<ul>
	<li>All the visited cells of the path are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</li>
	<li>All the adjacent cells of the path are <strong>8-directionally</strong> connected (i.e., they are different and they share an edge or a corner).</li>
</ul>

<p>The <strong>length of a clear path</strong> is the number of visited cells of this path.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/example1_1.png" style="width: 500px; height: 234px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[0,1],[1,0]]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/18/example2_1.png" style="height: 216px; width: 500px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[0,0,0],[1,1,0],[1,1,0]]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[1,0,0],[1,1,0],[1,1,0]]
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == grid.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == grid[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid[i][j] is 0 or 1</code></li>
</ul>
</div>