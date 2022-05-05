<h2><a href="https://leetcode.com/problems/patients-with-a-condition/">1527. Patients With a Condition</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg" style="transition-property: -border-bottom-color !important; --link-color:rgb(151, 172, 132) !important; --link-color-hover:rgb(166, 183, 146) !important; --link-color-active:rgb(151, 172, 132) !important; --visited-color:rgb(220, 167, 91) !important; --visited-color-hover:rgb(226, 179, 110) !important; --visited-color-active:rgb(220, 167, 91) !important; border-top-color: rgb(110, 122, 83) !important; border-right-color: rgb(110, 122, 83) !important; border-left-color: rgb(110, 122, 83) !important;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="fill: rgb(192, 202, 172) !important;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code style="background-color: rgb(23, 24, 15) !important; color: rgb(183, 195, 162) !important;">Patients</code></p>

<pre style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 196, 162) !important;">+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| patient_id   | int     |
| patient_name | varchar |
| conditions   | varchar |
+--------------+---------+
patient_id is the primary key for this table.
'conditions' contains 0 or more code separated by spaces. 
This table contains information of the patients in the hospital.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to report the patient_id, patient_name all conditions of patients who have Type I Diabetes. Type I Diabetes always starts with <code style="background-color: rgb(23, 24, 15) !important; color: rgb(183, 195, 162) !important;">DIAB1</code> prefix</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(23, 24, 15) !important; color: rgb(182, 196, 162) !important;"><strong>Input:</strong> 
Patients table:
+------------+--------------+--------------+
| patient_id | patient_name | conditions   |
+------------+--------------+--------------+
| 1          | Daniel       | YFEV COUGH   |
| 2          | Alice        |              |
| 3          | Bob          | DIAB100 MYOP |
| 4          | George       | ACNE DIAB100 |
| 5          | Alain        | DIAB201      |
+------------+--------------+--------------+
<strong>Output:</strong> 
+------------+--------------+--------------+
| patient_id | patient_name | conditions   |
+------------+--------------+--------------+
| 3          | Bob          | DIAB100 MYOP |
| 4          | George       | ACNE DIAB100 | 
+------------+--------------+--------------+
<strong>Explanation:</strong> Bob and George both have a condition that starts with DIAB1.
</pre>
</div>