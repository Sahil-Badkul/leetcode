<h2><a href="https://leetcode.com/problems/repeated-dna-sequences/">187. Repeated DNA Sequences</a></h2><h3>Medium</h3><hr><div><p>The <strong>DNA sequence</strong> is composed of a series of nucleotides abbreviated as <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'A'</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'C'</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'G'</code>, and <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'T'</code>.</p>

<ul>
	<li>For example, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">"ACGAATTCCG"</code> is a <strong>DNA sequence</strong>.</li>
</ul>

<p>When studying <strong>DNA</strong>, it is useful to identify repeated sequences within the DNA.</p>

<p>Given a string <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">s</code> that represents a <strong>DNA sequence</strong>, return all the <strong><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">10</code>-letter-long</strong> sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input:</strong> s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
<strong>Output:</strong> ["AAAAACCCCC","CCCCCAAAAA"]
</pre><p><strong>Example 2:</strong></p>
<pre style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 186, 156) !important;"><strong>Input:</strong> s = "AAAAAAAAAAAAA"
<strong>Output:</strong> ["AAAAAAAAAA"]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">s[i]</code> is either <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'A'</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'C'</code>, <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'G'</code>, or <code style="background-color: rgb(14, 19, 22) !important; color: rgb(160, 185, 157) !important;">'T'</code>.</li>
</ul>
</div>