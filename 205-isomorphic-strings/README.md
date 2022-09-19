<h2><a href="https://leetcode.com/problems/isomorphic-strings/">205. Isomorphic Strings</a></h2><h3>Easy</h3><hr><div><p>Given two strings <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">s</code> and <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">t</code>, <em style="color: rgb(252, 253, 253) !important;">determine if they are isomorphic</em>.</p>

<p>Two strings <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">s</code> and <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">t</code> are isomorphic if the characters in <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">s</code> can be replaced to get <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">t</code>.</p>

<p>All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> s = "egg", t = "add"
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> s = "foo", t = "bar"
<strong>Output:</strong> false
</pre><p><strong>Example 3:</strong></p>
<pre style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;"><strong>Input:</strong> s = "paper", t = "title"
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">1 &lt;= s.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">t.length == s.length</code></li>
	<li><code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">s</code> and <code style="background-color: rgb(30, 42, 48) !important; color: rgb(198, 210, 216) !important;">t</code> consist of any valid ascii character.</li>
</ul>
</div>