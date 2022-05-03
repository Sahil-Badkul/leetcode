# Write your MySQL query statement below
select name as Customers 
from Customers
where id NOT in (
Select c.id
from Customers as c inner join Orders as o
on c.id = o.customerId)