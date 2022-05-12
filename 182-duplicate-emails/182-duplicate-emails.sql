# select Email
# from person 
# group by Email
# having count(Email) > 1;

select Email
from (
    select Email, count(email) as num
    from person
    group by email) as s
where num > 1;