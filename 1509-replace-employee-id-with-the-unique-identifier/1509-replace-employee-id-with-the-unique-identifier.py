def replace_employee_id(employees: pd.DataFrame, employee_uni: pd.DataFrame) -> pd.DataFrame:
    id_map = dict(zip(employee_uni['id'], employee_uni['unique_id']))
    employees['id'] = employees['id'].map(id_map)
    return employees.rename(columns = {'id':'unique_id'})
