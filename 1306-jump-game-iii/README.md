<h2><a href="https://leetcode.com/problems/jump-game-iii/">1306. Jump Game III</a></h2><h3>Medium</h3><hr><div><p>Given an array of non-negative integers <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">arr</code>, you are initially positioned at <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">start</code>&nbsp;index of the array. When you are at index <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">i</code>, you can jump&nbsp;to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">i + arr[i]</code> or <code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">i - arr[i]</code>, check if you can reach to <strong>any</strong> index with value 0.</p>

<p>Notice that you can not jump outside of the array at any time.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> arr = [4,2,3,0,3,1,2], start = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> 
All possible ways to reach at index 3 with value 0 are: 
index 5 -&gt; index 4 -&gt; index 1 -&gt; index 3 
index 5 -&gt; index 6 -&gt; index 4 -&gt; index 1 -&gt; index 3 
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> arr = [4,2,3,0,3,1,2], start = 0
<strong>Output:</strong> true 
<strong>Explanation: 
</strong>One possible way to reach at index 3 with value 0 is: 
index 0 -&gt; index 4 -&gt; index 1 -&gt; index 3
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(156, 186, 172) !important;"><strong>Input:</strong> arr = [3,0,2,1,2], start = 2
<strong>Output:</strong> false
<strong>Explanation: </strong>There is no way to reach at index 1 with value 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">1 &lt;= arr.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= arr[i] &lt;&nbsp;arr.length</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(157, 185, 172) !important;">0 &lt;= start &lt; arr.length</code></li>
</ul>
</div>