<h2><a href="https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/">1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts</a></h2><h3>Medium</h3><hr><div><p>You are given a rectangular cake of size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h x w</code> and two arrays of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">horizontalCuts</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">verticalCuts</code> where:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">horizontalCuts[i]</code> is the distance from the top of the rectangular cake to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> horizontal cut and similarly, and</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">verticalCuts[j]</code> is the distance from the left of the rectangular cake to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">j<sup>th</sup></code> vertical cut.</li>
</ul>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">horizontalCuts</code> <em style="color: rgb(234, 238, 241) !important;">and</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">verticalCuts</code>. Since the answer can be a large number, return this <strong>modulo</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_2.png" style="width: 225px; height: 240px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> h = 5, w = 4, horizontalCuts = [1,2,4], verticalCuts = [1,3]
<strong>Output:</strong> 4 
<strong>Explanation:</strong> The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green piece of cake has the maximum area.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_3.png" style="width: 225px; height: 240px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> h = 5, w = 4, horizontalCuts = [3,1], verticalCuts = [1]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green and yellow pieces of cake have the maximum area.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> h = 5, w = 4, horizontalCuts = [3], verticalCuts = [3]
<strong>Output:</strong> 9
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= h, w &lt;= 10<sup>9</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= horizontalCuts.length &lt;= min(h - 1, 10<sup>5</sup>)</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= verticalCuts.length &lt;= min(w - 1, 10<sup>5</sup>)</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= horizontalCuts[i] &lt; h</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= verticalCuts[i] &lt; w</code></li>
	<li>All the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">horizontalCuts</code> are distinct.</li>
	<li>All the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">verticalCuts</code> are distinct.</li>
</ul>
</div>