<h2><a href="https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/">363. Max Sum of Rectangle No Larger Than K</a></h2><h3>Hard</h3><hr><div><p>Given an <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">m x n</code> matrix <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">matrix</code> and an integer <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">k</code>, return <em style="color: rgb(255, 255, 255) !important;">the max sum of a rectangle in the matrix such that its sum is no larger than</em> <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">k</code>.</p>

<p>It is <strong>guaranteed</strong> that there will be a rectangle with a sum no larger than <code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">k</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/18/sum-grid.jpg" style="width: 255px; height: 176px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> matrix = [[1,0,1],[0,-2,3]], k = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> Because the sum of the blue rectangle [[0, 1], [-2, 3]] is 2, and 2 is the max number no larger than k (k = 2).
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 218) !important;"><strong>Input:</strong> matrix = [[2,2,-1]], k = 3
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">m == matrix.length</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">n == matrix[i].length</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">1 &lt;= m, n &lt;= 100</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">-100 &lt;= matrix[i][j] &lt;= 100</code></li>
	<li><code style="background-color: rgb(31, 44, 50) !important; color: rgb(200, 212, 217) !important;">-10<sup>5</sup> &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> What if the number of rows is much larger than the number of columns?</p>
</div>