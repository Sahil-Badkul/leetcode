<h2><a href="https://leetcode.com/problems/fix-names-in-a-table/">1667. Fix Names in a Table</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg" style="transition-property: -border-bottom-color !important; --link-color:rgb(151, 172, 132) !important; --link-color-hover:rgb(166, 183, 146) !important; --link-color-active:rgb(151, 172, 132) !important; --visited-color:rgb(220, 167, 91) !important; --visited-color-hover:rgb(226, 179, 110) !important; --visited-color-active:rgb(220, 167, 91) !important; border-top-color: rgb(110, 122, 83) !important; border-right-color: rgb(110, 122, 83) !important; border-left-color: rgb(110, 122, 83) !important;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="fill: rgb(192, 202, 172) !important;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 195, 162) !important;">Users</code></p>

<pre style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 196, 162) !important;">+----------------+---------+
| Column Name    | Type    |
+----------------+---------+
| user_id        | int     |
| name           | varchar |
+----------------+---------+
user_id is the primary key for this table.
This table contains the ID and the name of the user. The name consists of only lowercase and uppercase characters.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to fix the names so that only the first character is uppercase and the rest are lowercase.</p>

<p>Return the result table ordered by <code style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 195, 162) !important;">user_id</code>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 196, 162) !important;"><strong>Input:</strong> 
Users table:
+---------+-------+
| user_id | name  |
+---------+-------+
| 1       | aLice |
| 2       | bOB   |
+---------+-------+
<strong>Output:</strong> 
+---------+-------+
| user_id | name  |
+---------+-------+
| 1       | Alice |
| 2       | Bob   |
+---------+-------+
</pre>
</div>