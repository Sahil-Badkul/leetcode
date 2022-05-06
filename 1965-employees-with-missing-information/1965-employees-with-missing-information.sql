select employee_id 
from employees 
where employee_id Not in (select employee_id from salaries)
Union 
select employee_id
from salaries
where employee_id not in (select employee_id from employees)
order by employee_id