<h2><a href="https://leetcode.com/problems/minimum-genetic-mutation/">433. Minimum Genetic Mutation</a></h2><h3>Medium</h3><hr><div><p>A gene string can be represented by an 8-character long string, with choices from <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">'A'</code>, <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">'C'</code>, <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">'G'</code>, and <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">'T'</code>.</p>

<p>Suppose we need to investigate a mutation from a gene string <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">start</code> to a gene string <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">end</code> where one mutation is defined as one single character changed in the gene string.</p>

<ul>
	<li>For example, <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">"AACCGGTT" --&gt; "AACCGGTA"</code> is one mutation.</li>
</ul>

<p>There is also a gene bank <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">bank</code> that records all the valid gene mutations. A gene must be in <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">bank</code> to make it a valid gene string.</p>

<p>Given the two gene strings <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">start</code> and <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">end</code> and the gene bank <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">bank</code>, return <em style="color: rgb(231, 230, 208) !important;">the minimum number of mutations needed to mutate from </em><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">start</code><em style="color: rgb(231, 230, 208) !important;"> to </em><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">end</code>. If there is no such a mutation, return <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">-1</code>.</p>

<p>Note that the starting point is assumed to be valid, so it might not be included in the bank.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 162) !important;"><strong>Input:</strong> start = "AACCGGTT", end = "AACCGGTA", bank = ["AACCGGTA"]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 162) !important;"><strong>Input:</strong> start = "AACCGGTT", end = "AAACGGTA", bank = ["AACCGGTA","AACCGCTA","AAACGGTA"]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 162) !important;"><strong>Input:</strong> start = "AAAAACCC", end = "AACCCCCC", bank = ["AAAACCCC","AAACCCCC","AACCCCCC"]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">start.length == 8</code></li>
	<li><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">end.length == 8</code></li>
	<li><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">0 &lt;= bank.length &lt;= 10</code></li>
	<li><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">bank[i].length == 8</code></li>
	<li><code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">start</code>, <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">end</code>, and <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">bank[i]</code> consist of only the characters <code style="background-color: rgb(24, 25, 15) !important; color: rgb(183, 196, 163) !important;">['A', 'C', 'G', 'T']</code>.</li>
</ul>
</div>