import pandas as pd

def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    # Step 1: Get the highest salary per department
    highest_salary = employee.groupby('departmentId')['salary'].max().reset_index()

    # Step 2: Join with employee to get employee(s) who have the highest salary in their department
    df = pd.merge(employee, highest_salary, on=['departmentId', 'salary'])

    # Step 3: Join with department table to get department names
    df = pd.merge(df, department, left_on='departmentId', right_on='id')

    # Step 4: Select and rename relevant columns
    return df[['name_y', 'name_x', 'salary']].rename(columns={
        'name_y': 'Department',
        'name_x': 'Employee',
        'salary': 'Salary'
    })
