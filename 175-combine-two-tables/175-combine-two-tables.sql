select p.firstName, p.lastName, ad.city, ad.state
from person as p left join address as ad
on p.personId = ad.personId