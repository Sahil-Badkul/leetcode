<h2><a href="https://leetcode.com/problems/sales-analysis-iii/">1084. Sales Analysis III</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="fill: rgb(195, 207, 213) !important;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">Product</code></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| product_id   | int     |
| product_name | varchar |
| unit_price   | int     |
+--------------+---------+
product_id is the primary key of this table.
Each row of this table indicates the name and the price of each product.
</pre>

<p>Table: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">Sales</code></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| seller_id   | int     |
| product_id  | int     |
| buyer_id    | int     |
| sale_date   | date    |
| quantity    | int     |
| price       | int     |
+-------------+---------+
This table has no primary key, it can have repeated rows.
product_id is a foreign key to the Product table.
Each row of this table contains some information about one sale.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query that reports the <strong>products</strong> that were <strong>only</strong> sold in the first quarter of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2019</code>. That is, between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2019-01-01</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2019-03-31</code> inclusive.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> 
Product table:
+------------+--------------+------------+
| product_id | product_name | unit_price |
+------------+--------------+------------+
| 1          | S8           | 1000       |
| 2          | G4           | 800        |
| 3          | iPhone       | 1400       |
+------------+--------------+------------+
Sales table:
+-----------+------------+----------+------------+----------+-------+
| seller_id | product_id | buyer_id | sale_date  | quantity | price |
+-----------+------------+----------+------------+----------+-------+
| 1         | 1          | 1        | 2019-01-21 | 2        | 2000  |
| 1         | 2          | 2        | 2019-02-17 | 1        | 800   |
| 2         | 2          | 3        | 2019-06-02 | 1        | 800   |
| 3         | 3          | 4        | 2019-05-13 | 2        | 2800  |
+-----------+------------+----------+------------+----------+-------+
<strong>Output:</strong> 
+-------------+--------------+
| product_id  | product_name |
+-------------+--------------+
| 1           | S8           |
+-------------+--------------+
<strong>Explanation:</strong> 
The product with id 1 was only sold in the spring of 2019.
The product with id 2 was sold in the spring of 2019 but was also sold after the spring of 2019.
The product with id 3 was sold after spring 2019.
We return only product 1 as it is the product that was only sold in the spring of 2019.
</pre>
</div>