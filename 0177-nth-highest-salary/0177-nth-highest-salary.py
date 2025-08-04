import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    # Remove duplicate salaries and sort in descending order
    unique_salaries = employee['salary'].drop_duplicates().sort_values(ascending=False)

    # Check if N is within bounds
    if N <= 0:
        return pd.DataFrame({f'getNthHighestSalary({N})': [None]})
    if N > len(unique_salaries):
        return pd.DataFrame({f'getNthHighestSalary({N})': [None]})
    
    # Get the N-th highest salary (N-1 index since 0-based)
    nth_salary = unique_salaries.iloc[N - 1]
    return pd.DataFrame({f'getNthHighestSalary({N})': [nth_salary]})
