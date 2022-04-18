<h2><a href="https://leetcode.com/problems/flood-fill/solution/">733. Flood Fill</a></h2><h3>Easy</h3><hr><div><p>An image is represented by an <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m x n</code> integer grid <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">image</code> where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">image[i][j]</code> represents the pixel value of the image.</p>

<p>You are also given three integers <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">sr</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">sc</code>, and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">newColor</code>. You should perform a <strong>flood fill</strong> on the image starting from the pixel <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">image[sr][sc]</code>.</p>

<p>To perform a <strong>flood fill</strong>, consider the starting pixel, plus any pixels connected <strong>4-directionally</strong> to the starting pixel of the same color as the starting pixel, plus any pixels connected <strong>4-directionally</strong> to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">newColor</code>.</p>

<p>Return <em style="color: rgb(200, 218, 210) !important;">the modified image after performing the flood fill</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/01/flood1-grid.jpg" style="width: 613px; height: 253px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2
<strong>Output:</strong> [[2,2,2],[2,2,0],[2,0,1]]
<strong>Explanation:</strong> From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, newColor = 2
<strong>Output:</strong> [[2,2,2],[2,2,2]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">m == image.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n == image[i].length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= m, n &lt;= 50</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= image[i][j], newColor &lt; 2<sup>16</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= sr &lt;&nbsp;m</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= sc &lt;&nbsp;n</code></li>
</ul>
</div>