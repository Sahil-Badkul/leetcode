Select (select distinct (salary)
from employee
order by salary DESC
limit 1, 1) as SecondHighestSalary