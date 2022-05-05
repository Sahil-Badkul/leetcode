# Write your MySQL query statement below
select users.user_id, concat(upper(substr(users.name, 1, 1)), lower((substr(users.name,2,length(users.name)-1)))) as name
from users
order by users.user_id