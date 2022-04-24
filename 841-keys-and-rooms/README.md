<h2><a href="https://leetcode.com/problems/keys-and-rooms/">841. Keys and Rooms</a></h2><h3>Medium</h3><hr><div><p>There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> rooms labeled from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n - 1</code>&nbsp;and all the rooms are locked except for room <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.</p>

<p>When you visit a room, you may find a set of <strong>distinct keys</strong> in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.</p>

<p>Given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">rooms</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">rooms[i]</code> is the set of keys that you can obtain if you visited room <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code>, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> <em style="color: rgb(234, 238, 241) !important;">if you can visit <strong>all</strong> the rooms, or</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code> <em style="color: rgb(234, 238, 241) !important;">otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> rooms = [[1],[2],[3],[]]
<strong>Output:</strong> true
<strong>Explanation:</strong> 
We visit room 0 and pick up key 1.
We then visit room 1 and pick up key 2.
We then visit room 2 and pick up key 3.
We then visit room 3.
Since we were able to visit every room, we return true.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> rooms = [[1,3],[3,0,1],[2],[0]]
<strong>Output:</strong> false
<strong>Explanation:</strong> We can not enter room number 2 since the only key that unlocks it is in that room.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == rooms.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= n &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= rooms[i].length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= sum(rooms[i].length) &lt;= 3000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= rooms[i][j] &lt; n</code></li>
	<li>All the values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">rooms[i]</code> are <strong>unique</strong>.</li>
</ul>
</div>