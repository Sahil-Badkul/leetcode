<h2><a href="https://leetcode.com/problems/find-pivot-index/">724. Find Pivot Index</a></h2><h3>Easy</h3><hr><div><p>Given an array of integers <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">nums</code>, calculate the <strong>pivot index</strong> of this array.</p>

<p>The <strong>pivot index</strong> is the index where the sum of all the numbers <strong>strictly</strong> to the left of the index is equal to the sum of all the numbers <strong>strictly</strong> to the index's right.</p>

<p>If the index is on the left edge of the array, then the left sum is <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">0</code> because there are no elements to the left. This also applies to the right edge of the array.</p>

<p>Return <em style="color: rgb(252, 253, 253) !important;">the <strong>leftmost pivot index</strong></em>. If no such index exists, return -1.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> nums = [1,7,3,6,5,6]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> -1
<strong>Explanation:</strong>
There is no index that satisfies the conditions in the problem statement.</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> nums = [2,1,-1]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as&nbsp;1991:&nbsp;<a href="https://leetcode.com/problems/find-the-middle-index-in-array/" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(180, 193, 203) !important; --link-color-hover:rgb(198, 208, 215) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(179, 144, 238) !important; --visited-color-hover:rgb(197, 171, 242) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(104, 135, 151) !important; border-right-color: rgb(104, 135, 151) !important; border-left-color: rgb(104, 135, 151) !important;">https://leetcode.com/problems/find-the-middle-index-in-array/</a></p>
</div>