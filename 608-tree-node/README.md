<h2><a href="https://leetcode.com/problems/tree-node/">608. Tree Node</a></h2><h3>Medium</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="fill: rgb(195, 207, 213) !important;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">Tree</code></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| p_id        | int  |
+-------------+------+
id is the primary key column for this table.
Each row of this table contains information about the id of a node and the id of its parent node in a tree.
The given structure is always a valid tree.
</pre>

<p>&nbsp;</p>

<p>Each node in the tree can be one of three types:</p>

<ul>
	<li><strong>"Leaf"</strong>: if the node is a leaf node.</li>
	<li><strong>"Root"</strong>: if the node is the root of the tree.</li>
	<li><strong>"Inner"</strong>: If the node is neither a leaf node nor a root node.</li>
</ul>

<p>Write an SQL query to report the type of each node in the tree.</p>

<p>Return the result table <strong>ordered</strong> by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">id</code> <strong>in ascending order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/22/tree1.jpg" style="width: 304px; height: 224px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> 
Tree table:
+----+------+
| id | p_id |
+----+------+
| 1  | null |
| 2  | 1    |
| 3  | 1    |
| 4  | 2    |
| 5  | 2    |
+----+------+
<strong>Output:</strong> 
+----+-------+
| id | type  |
+----+-------+
| 1  | Root  |
| 2  | Inner |
| 3  | Leaf  |
| 4  | Leaf  |
| 5  | Leaf  |
+----+-------+
<strong>Explanation:</strong> 
Node 1 is the root node because its parent node is null and it has child nodes 2 and 3.
Node 2 is an inner node because it has parent node 1 and child node 4 and 5.
Nodes 3, 4, and 5 are leaf nodes because they have parent nodes and they do not have child nodes.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/22/tree2.jpg" style="width: 64px; height: 65px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> 
Tree table:
+----+------+
| id | p_id |
+----+------+
| 1  | null |
+----+------+
<strong>Output:</strong> 
+----+-------+
| id | type  |
+----+-------+
| 1  | Root  |
+----+-------+
<strong>Explanation:</strong> If there is only one node on the tree, you only need to output its root attributes.
</pre>
</div>