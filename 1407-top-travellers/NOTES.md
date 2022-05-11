select u.name, isnull(sum(r.distance),0) as travelled_distance
from users u left outer join rides r
on u.id = r.user_id
group by u.name
order by travelled_distance desc, name asc