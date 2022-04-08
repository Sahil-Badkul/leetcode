<h2><a href="https://leetcode.com/problems/intersection-of-two-linked-lists/">160. Intersection of Two Linked Lists</a></h2><h3>Easy</h3><hr><div><p>Given the heads of two singly linked-lists <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">headA</code> and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">headB</code>, return <em style="color: rgb(203, 218, 200) !important;">the node at which the two lists intersect</em>. If the two linked lists have no intersection at all, return <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">null</code>.</p>

<p>For example, the following two linked lists begin to intersect at node <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">c1</code>:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/05/160_statement.png" style="width: 500px; height: 162px; filter: brightness(0.75);">
<p>The test cases are generated such that there are no cycles anywhere in the entire linked structure.</p>

<p><strong>Note</strong> that the linked lists must <strong>retain their original structure</strong> after the function returns.</p>

<p><strong>Custom Judge:</strong></p>

<p>The inputs to the <strong>judge</strong> are given as follows (your program is <strong>not</strong> given these inputs):</p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">intersectVal</code> - The value of the node where the intersection occurs. This is <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">0</code> if there is no intersected node.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listA</code> - The first linked list.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listB</code> - The second linked list.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">skipA</code> - The number of nodes to skip ahead in <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listA</code> (starting from the head) to get to the intersected node.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">skipB</code> - The number of nodes to skip ahead in <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listB</code> (starting from the head) to get to the intersected node.</li>
</ul>

<p>The judge will then create the linked structure based on these inputs and pass the two heads, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">headA</code> and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">headB</code>&nbsp;to your program. If you correctly return the intersected node, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/05/160_example_1_1.png" style="width: 500px; height: 162px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input:</strong> intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
<strong>Output:</strong> Intersected at '8'
<strong>Explanation:</strong> The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/05/160_example_2.png" style="width: 500px; height: 194px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input:</strong> intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
<strong>Output:</strong> Intersected at '2'
<strong>Explanation:</strong> The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/05/160_example_3.png" style="width: 300px; height: 189px; filter: brightness(0.75);">
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input:</strong> intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
<strong>Output:</strong> No intersection
<strong>Explanation:</strong> From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listA</code> is in the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">m</code>.</li>
	<li>The number of nodes of <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listB</code> is in the <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">n</code>.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">1 &lt;= m, n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">1 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">0 &lt;= skipA &lt;&nbsp;m</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">0 &lt;= skipB &lt;&nbsp;n</code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">intersectVal</code> is <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">0</code> if <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listA</code> and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listB</code> do not intersect.</li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">intersectVal == listA[skipA] == listB[skipB]</code> if <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listA</code> and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">listB</code> intersect.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you write a solution that runs in <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">O(m + n)</code> time and use only <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">O(1)</code> memory?</div>