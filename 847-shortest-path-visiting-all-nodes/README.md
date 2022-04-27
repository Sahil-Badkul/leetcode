<h2><a href="https://leetcode.com/problems/shortest-path-visiting-all-nodes/">847. Shortest Path Visiting All Nodes</a></h2><h3>Hard</h3><hr><div><p>You have an undirected, connected graph of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n</code> nodes labeled from <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code> to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n - 1</code>. You are given an array <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">graph</code> where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">graph[i]</code> is a list of all the nodes connected with node <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">i</code> by an edge.</p>

<p>Return <em style="color: rgb(200, 218, 210) !important;">the length of the shortest path that visits every node</em>. You may start and stop at any node, you may revisit nodes multiple times, and you may reuse edges.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/12/shortest1-graph.jpg" style="width: 222px; height: 183px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> graph = [[1,2,3],[0],[0],[0]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> One possible path is [1,0,2,0,3]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/12/shortest2-graph.jpg" style="width: 382px; height: 222px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> graph = [[1],[0,2,4],[1,3,4],[2],[1,2]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> One possible path is [0,1,4,2,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">n == graph.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= n &lt;= 12</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= graph[i].length &lt;&nbsp;n</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">graph[i]</code> does not contain <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">i</code>.</li>
	<li>If <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">graph[a]</code> contains <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">b</code>, then <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">graph[b]</code> contains <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">a</code>.</li>
	<li>The input graph is always connected.</li>
</ul>
</div>