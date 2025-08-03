import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    # Initialize bonus column with 0
    employees["bonus"] = 0

    # Assign salary where employee_id is even
    employees.loc[(employees["employee_id"] % 2 != 0) & (~employees["name"].str.startswith("M")), "bonus"] = employees["salary"]

    return employees[["employee_id", "bonus"]].sort_values(by = "employee_id")
