select Email
from person 
group by Email
having count(Email) > 1;