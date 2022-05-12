# Write your MySQL query statement below
select name, sum(t.amount) as balance
from users as u join transactions as t
on u.account = t.account
group by t.account
having balance > 10000;
