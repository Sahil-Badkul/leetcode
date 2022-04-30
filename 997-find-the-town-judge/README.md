<h2><a href="https://leetcode.com/problems/find-the-town-judge/">997. Find the Town Judge</a></h2><h3>Easy</h3><hr><div><p>In a town, there are <code style="">n</code> people labeled from <code style="">1</code> to <code style="">n</code>. There is a rumor that one of these people is secretly the town judge.</p>

<p>If the town judge exists, then:</p>

<ol>
	<li>The town judge trusts nobody.</li>
	<li>Everybody (except for the town judge) trusts the town judge.</li>
	<li>There is exactly one person that satisfies properties <strong>1</strong> and <strong>2</strong>.</li>
</ol>

<p>You are given an array <code style="">trust</code> where <code style="">trust[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> representing that the person labeled <code style="">a<sub>i</sub></code> trusts the person labeled <code style="">b<sub>i</sub></code>.</p>

<p>Return <em style="">the label of the town judge if the town judge exists and can be identified, or return </em><code style="">-1</code><em style=""> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style=""><strong>Input:</strong> n = 2, trust = [[1,2]]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>

<pre style=""><strong>Input:</strong> n = 3, trust = [[1,3],[2,3]]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre style=""><strong>Input:</strong> n = 3, trust = [[1,3],[2,3],[3,1]]
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="">1 &lt;= n &lt;= 1000</code></li>
	<li><code style="">0 &lt;= trust.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="">trust[i].length == 2</code></li>
	<li>All the pairs of <code style="">trust</code> are <strong>unique</strong>.</li>
	<li><code style="">a<sub>i</sub> != b<sub>i</sub></code></li>
	<li><code style="">1 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= n</code></li>
</ul>
</div>