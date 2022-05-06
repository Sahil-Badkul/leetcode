# select employee_id 
# from employees 
# where employee_id Not in (select employee_id from salaries)
# Union 
# select employee_id
# from salaries
# where employee_id not in (select employee_id from employees)
# order by employee_id


select t.employee_id
from (select * from employees left join salaries using (employee_id)
     Union
     select * from employees right join salaries using (employee_id))
     as t
where t.salary is null or t.name is null
order by t.employee_id