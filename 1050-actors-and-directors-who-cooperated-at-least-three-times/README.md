<h2><a href="https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/">1050. Actors and Directors Who Cooperated At Least Three Times</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="fill: rgb(195, 207, 213) !important;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">ActorDirector</code></p>

<pre style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 214) !important;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| actor_id    | int     |
| director_id | int     |
| timestamp   | int     |
+-------------+---------+
timestamp is the primary key column for this table.
</pre>

<p>&nbsp;</p>

<p>Write a SQL query for a report that provides the pairs <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">(actor_id, director_id)</code> where the actor has cooperated with the director at least three times.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 214) !important;"><strong>Input:</strong> 
ActorDirector table:
+-------------+-------------+-------------+
| actor_id    | director_id | timestamp   |
+-------------+-------------+-------------+
| 1           | 1           | 0           |
| 1           | 1           | 1           |
| 1           | 1           | 2           |
| 1           | 2           | 3           |
| 1           | 2           | 4           |
| 2           | 1           | 5           |
| 2           | 1           | 6           |
+-------------+-------------+-------------+
<strong>Output:</strong> 
+-------------+-------------+
| actor_id    | director_id |
+-------------+-------------+
| 1           | 1           |
+-------------+-------------+
<strong>Explanation:</strong> The only pair is (1, 1) where they cooperated exactly 3 times.
</pre>
</div>