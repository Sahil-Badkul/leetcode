# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

# delete p1 from person p1, person p2
# where p1.email = p2.email And p1.id > p2.id;

delete from person where id not in 
(select * from (
        select min(id) from person Group By email) as p);