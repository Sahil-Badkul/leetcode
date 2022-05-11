select u.name, IFNULL(sum(r.distance),0) as travelled_distance 
from users as u left join rides as r
on u.id = r.user_id
group by r.user_id
order by travelled_distance desc, u.name asc