import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    filtered_students = students[students['student_id'] == 101]
    return filtered_students[["name", "age"]]
