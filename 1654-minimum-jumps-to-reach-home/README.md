<h2><a href="https://leetcode.com/problems/minimum-jumps-to-reach-home/">1654. Minimum Jumps to Reach Home</a></h2><h3>Medium</h3><hr><div><p>A certain bug's home is on the x-axis at position <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">x</code>. Help them get there from position <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0</code>.</p>

<p>The bug jumps according to the following rules:</p>

<ul>
	<li>It can jump exactly <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">a</code> positions <strong>forward</strong> (to the right).</li>
	<li>It can jump exactly <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">b</code> positions <strong>backward</strong> (to the left).</li>
	<li>It cannot jump backward twice in a row.</li>
	<li>It cannot jump to any <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">forbidden</code> positions.</li>
</ul>

<p>The bug may jump forward <strong>beyond</strong> its home, but it <strong>cannot jump</strong> to positions numbered with <strong>negative</strong> integers.</p>

<p>Given an array of integers <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">forbidden</code>, where <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">forbidden[i]</code> means that the bug cannot jump to the position <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">forbidden[i]</code>, and integers <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">a</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">b</code>, and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">x</code>, return <em style="color: rgb(200, 218, 210) !important;">the minimum number of jumps needed for the bug to reach its home</em>. If there is no possible sequence of jumps that lands the bug on position <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">x</code>, return <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">-1.</code></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> forbidden = [14,4,18,1,15], a = 3, b = 15, x = 9
<strong>Output:</strong> 3
<strong>Explanation:</strong> 3 jumps forward (0 -&gt; 3 -&gt; 6 -&gt; 9) will get the bug home.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> forbidden = [8,3,16,6,12,20], a = 15, b = 13, x = 11
<strong>Output:</strong> -1
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> forbidden = [1,6,2,14,5,17,4], a = 16, b = 9, x = 7
<strong>Output:</strong> 2
<strong>Explanation:</strong> One jump forward (0 -&gt; 16) then one jump backward (16 -&gt; 7) will get the bug home.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= forbidden.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= a, b, forbidden[i] &lt;= 2000</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= x &lt;= 2000</code></li>
	<li>All the elements in <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">forbidden</code> are distinct.</li>
	<li>Position <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">x</code> is not forbidden.</li>
</ul>
</div>