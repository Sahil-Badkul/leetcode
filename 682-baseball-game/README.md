<h2><a href="https://leetcode.com/problems/baseball-game/">682. Baseball Game</a></h2><h3>Easy</h3><hr><div><p>You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.</p>

<p>At the beginning of the game, you start with an empty record. You are given a list of strings <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">ops</code>, where <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">ops[i]</code> is the <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">i<sup>th</sup></code> operation you must apply to the record and is one of the following:</p>

<ol>
	<li>An integer <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">x</code> - Record a new score of <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">x</code>.</li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"+"</code> - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.</li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"D"</code> - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.</li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"C"</code> - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.</li>
</ol>

<p>Return <em style="color: rgb(200, 218, 210) !important;">the sum of all the scores on the record</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> ops = ["5","2","C","D","+"]
<strong>Output:</strong> 30
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> ops = ["5","-2","4","C","D","9","+","+"]
<strong>Output:</strong> 27
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> ops = ["1"]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">1 &lt;= ops.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">ops[i]</code> is <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"C"</code>, <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"D"</code>, <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"+"</code>, or a string representing an integer in the range <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">[-3 * 10<sup>4</sup>, 3 * 10<sup>4</sup>]</code>.</li>
	<li>For operation <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"+"</code>, there will always be at least two previous scores on the record.</li>
	<li>For operations <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"C"</code> and <code style="background-color: rgb(14, 20, 23) !important; color: rgb(157, 186, 173) !important;">"D"</code>, there will always be at least one previous score on the record.</li>
</ul>
</div>