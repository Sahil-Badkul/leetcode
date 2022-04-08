<h2><a href="https://leetcode.com/problems/kth-largest-element-in-a-stream/">703. Kth Largest Element in a Stream</a></h2><h3>Easy</h3><hr><div><p>Design a class to find the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k<sup>th</sup></code> largest element in a stream. Note that it is the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k<sup>th</sup></code> largest element in the sorted order, not the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k<sup>th</sup></code> distinct element.</p>

<p>Implement <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">KthLargest</code> class:</p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">KthLargest(int k, int[] nums)</code> Initializes the object with the integer <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k</code> and the stream of integers <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">nums</code>.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">int add(int val)</code> Appends the integer <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">val</code> to the stream and returns the element representing the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k<sup>th</sup></code> largest element in the stream.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input</strong>
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
<strong>Output</strong>
[null, 4, 5, 5, 8, 8]

<strong>Explanation</strong>
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3);   // return 4
kthLargest.add(5);   // return 5
kthLargest.add(10);  // return 5
kthLargest.add(9);   // return 8
kthLargest.add(4);   // return 8
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">1 &lt;= k &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">0 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">-10<sup>4</sup> &lt;= val &lt;= 10<sup>4</sup></code></li>
	<li>At most <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">10<sup>4</sup></code> calls will be made to <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">add</code>.</li>
	<li>It is guaranteed that there will be at least <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k</code> elements in the array when you search for the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">k<sup>th</sup></code> element.</li>
</ul>
</div>