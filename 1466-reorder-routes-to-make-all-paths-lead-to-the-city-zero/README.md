<h2><a href="https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/">1466. Reorder Routes to Make All Paths Lead to the City Zero</a></h2><h3>Medium</h3><hr><div><p>There are <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n</code> cities numbered from <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code> to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n - 1</code> and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n - 1</code> roads such that there is only one way to travel between two different cities (this network form a tree). Last year, The ministry of transport decided to orient the roads in one direction because they are too narrow.</p>

<p>Roads are represented by <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">connections</code> where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">connections[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> represents a road from city <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">a<sub>i</sub></code> to city <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">b<sub>i</sub></code>.</p>

<p>This year, there will be a big event in the capital (city <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code>), and many people want to travel to this city.</p>

<p>Your task consists of reorienting some roads such that each city can visit the city <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code>. Return the <strong>minimum</strong> number of edges changed.</p>

<p>It's <strong>guaranteed</strong> that each city can reach city <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code> after reorder.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/13/sample_1_1819.png" style="width: 311px; height: 189px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
<strong>Output:</strong> 3
<strong>Explanation: </strong>Change the direction of edges show in red such that each node can reach the node 0 (capital).
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/13/sample_2_1819.png" style="width: 509px; height: 79px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
<strong>Output:</strong> 2
<strong>Explanation: </strong>Change the direction of edges show in red such that each node can reach the node 0 (capital).
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> n = 3, connections = [[1,0],[2,0]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">2 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">connections.length == n - 1</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">connections[i].length == 2</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= n - 1</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">a<sub>i</sub> != b<sub>i</sub></code></li>
</ul>
</div>